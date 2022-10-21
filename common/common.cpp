#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#if _WIN32
    #include <windows.h>
#endif

long long CYCLES_PER_SECOND = 4000000000;
uint64_t rdtsc() {
   uint32_t high, low;
   asm ("rdtsc" : "=a"(low), "=d"(high));
   return (((uint64_t)high) << 32) | ((uint64_t)low);
}
volatile double cpu_time() {
    asm ("mfence" ::: "memory");
    auto acc = __rdtsc(); // QueryPerformanceCounter() is trash
    asm ("mfence" ::: "memory");
    return ((double)acc) / CYCLES_PER_SECOND;
}

long long TEN = 10;
long long ONE_MILLION = 1000000;
double _get_cpu_time_delay() {
    double a = cpu_time();
    for (int i = 0; i < ONE_MILLION; i++) {
        asm ("nop");
    }
    double b = cpu_time();
    for (int i = 0; i < ONE_MILLION; i++) {
        asm ("nop");
        cpu_time();
    }
    double c = cpu_time();
    return ((c-b) - (b-a)) / ONE_MILLION;
}
double CPU_TIME_DELAY = _get_cpu_time_delay();
double undo_cpu_time_offset(double delta) {
    // true_delta = delta + CPU_TIME_DELAY + TURBO_BOOST_JITTER
    // TODO: account for intel turbo boost somehow?
    return max(0.0, delta - CPU_TIME_DELAY); // lose ~10 cycles of accuracy near 0, but keep delta positive
}

struct Item {
    Item* prev;
    Item* next;
    int i;
};
