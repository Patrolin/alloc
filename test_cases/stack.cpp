int main() {
    double alloc_time = 0;
    for (int i = 0; i < ONE_MILLION; i++) {
        alloc_time += items.push(i);
    }
    printf("  alloc_time: %.2f s; cycles/alloc: %.0f; CPU_TIME_OFFSET*N: %lf s\n", alloc_time, alloc_time * CYCLES_PER_SECOND / ONE_MILLION, CPU_TIME_OFFSET*ONE_MILLION);
    // TODO: free_time
}
