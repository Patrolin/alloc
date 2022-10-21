void *_bestCase_curr = malloc((ONE_MILLION*2) * sizeof(Item));
#define BestCaseAllocMacro(T) (_bestCase_curr = (void *)(((T*) _bestCase_curr) + 1))
#define BestCaseFreeMacro(T) _bestCase_curr = (void *)(((T*) _bestCase_curr) - 1)

#define ALLOC(T) (T *)BestCaseAllocMacro(T)
#define FREE(T, ptr) BestCaseFreeMacro(T)
