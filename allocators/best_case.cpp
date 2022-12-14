void *_bestCase_curr = malloc((ONE_MILLION*2) * sizeof(Item));
void *BestCaseAlloc(size_t bytes) {
    return (_bestCase_curr = (void *)(((char*) _bestCase_curr) + bytes));
}
void BestCaseFree(size_t bytes) {
    _bestCase_curr = (void *)(((char*) _bestCase_curr) - bytes);
}

#define ALLOC(T) (T *)BestCaseAlloc(sizeof(T))
#define FREE(T, ptr) (void)BestCaseFree(sizeof(T))
