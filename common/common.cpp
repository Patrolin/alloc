#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#if _WIN32
    #include <windows.h>
    double _get_cpu_time_frequency() {
        LARGE_INTEGER acc;
        QueryPerformanceFrequency(&acc);
        return (double)acc.QuadPart;
    }
    double _cpu_time_frequency = _get_cpu_time_frequency();
    volatile double cpu_time() {
        LARGE_INTEGER acc;
        QueryPerformanceCounter(&acc);
        return ((double)acc.QuadPart) / _cpu_time_frequency;
    }
#else
    #include <time.h>
    volatile double cpu_time() {
        struct timespec time;
        clock_gettime(CLOCK_REALTIME, &time);
        return ((double)time.tv_sec) + ((double)time.tv_nsec)/1e9;
    }
#endif

long long ONE_MILLION = 1000000;
long long CYCLES_PER_SECOND = 4000000000;
double _get_cpu_time_offset() {
    double a = cpu_time();
    for (int i = 0; i < ONE_MILLION; i++) {
        __asm__("nop\n\t");
    }
    double b = cpu_time();
    for (int i = 0; i < ONE_MILLION; i++) {
        __asm__("nop\n\t");
        cpu_time();
    }
    double c = cpu_time();
    return ((c-b) - (b-a)) / ONE_MILLION;
}
double CPU_TIME_OFFSET = _get_cpu_time_offset();

struct Item {
    Item* next;
    int i;
};
