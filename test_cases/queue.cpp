void test(long long N) {
    double alloc_time = 0;
    for (int i = 0; i < N; i++) {
        alloc_time += items.push(i);
    }
    printf("  alloc_time: %.2f s; cycles/alloc: %.0f; CPU_TIME_DELAY*N: %.2f s; N = %lli\n", alloc_time, alloc_time * CYCLES_PER_SECOND / N, CPU_TIME_DELAY*N, N);
    double free_time = 0;
    for (int i = 0; i < N; i++) {
        free_time += items.popLeft(i);
    }
    printf("  free_time: %.2f s; cycles/free: %.0f\n", free_time, alloc_time * CYCLES_PER_SECOND / N);
}

int main() {
    test(TEN);
#ifndef SKIP_CHECK
    items.assertEmpty();
#endif
    test(ONE_MILLION);
#ifndef SKIP_CHECK
    items.assertEmpty();
#endif
}
