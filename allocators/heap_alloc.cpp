auto default_heap = GetProcessHeap();

#define ALLOC(T) (T *)HeapAlloc(default_heap, 0, sizeof(T))
#define FREE(T, ptr) HeapFree(default_heap, 0, ptr)
