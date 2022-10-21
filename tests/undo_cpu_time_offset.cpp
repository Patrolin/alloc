int main() {
    auto a = cpu_time();
    auto b = undo_cpu_time_offset(a);
    if ((a - b) > 150e-9) {
        printf("time; %f; %f\n", a, b);
        throw;
    }
    printf("  passed\n");
}
