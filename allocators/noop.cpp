void *_bestCase_curr = malloc((ONE_MILLION*2) * sizeof(Item));
#define ALLOC(T) _bestCase_curr
#define FREE(T, ptr) ((void)0)
#define SKIP_CHECK
