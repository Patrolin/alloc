template <typename T>
struct Deque {
    T* first;
    T* last;

    double push(int i) {
        auto start_time = cpu_time();
        T *next = (T *)ALLOC(T);
        auto time = cpu_time();
        *next = {};
        next->next = next;
        next->i = i;
        if (this->last != 0) this->last->next = next;
        this->last = next;
        return time - start_time - CPU_TIME_OFFSET;
    }
};
Deque<Item> items = {};
