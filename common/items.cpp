template <typename T>
struct Deque {
    T* first;
    T* last;

    double push(int i) {
        double start_time = cpu_time();
        T *next = (T *)ALLOC(T);
        double time = cpu_time();

        *next = {};
        next->i = i;

        next->prev = last;
        if (this->first == 0) this->first = next;
        if (this->last != 0) this->last->next = next;
        this->last = next;

        return max(0.0, time - start_time - CPU_TIME_OFFSET);
    }
    double pop(int i) {
        T *prev = this->last->prev;
        double start_time = cpu_time();
        FREE(T, this->last);
        double time = cpu_time();
        this->last = prev;
        if (prev == 0) this->first = 0;
        return max(0.0, time - start_time - CPU_TIME_OFFSET);
    }
    double popLeft(int i) {
        T *next = this->first->next;
        double start_time = cpu_time();
        FREE(T, this->first);
        double time = cpu_time();
        this->first = next;
        if (next == 0) this->last = 0;
        return max(0.0, time - start_time - CPU_TIME_OFFSET);
    }
    void assertEmpty() {
        auto curr = this->first;
        for (int i = 0; (curr != 0) & (i < 10); i++) {
            printf("wtf; %i\n", curr->i);
            curr = curr->next;
        }
        if ((this->first != 0) | (this->last != 0)) throw;
    }
};
Deque<Item> items = {};
