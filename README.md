# alloc
allocator tests

## run
```
$ python main.py
queue/best_case
  alloc_time: 0.00 s; cycles/alloc: 1; CPU_TIME_OFFSET*N: 0.018172 s
  free_time: 0.00 s; cycles/free: 1; CPU_TIME_OFFSET*N: 0.018172 s
queue/best_case_macro
  alloc_time: 0.00 s; cycles/alloc: 2; CPU_TIME_OFFSET*N: 0.018085 s
  free_time: 0.00 s; cycles/free: 2; CPU_TIME_OFFSET*N: 0.018085 s
queue/heap_alloc
  alloc_time: 0.02 s; cycles/alloc: 89; CPU_TIME_OFFSET*N: 0.017894 s
  free_time: 0.01 s; cycles/free: 89; CPU_TIME_OFFSET*N: 0.017894 s
queue/malloc
  alloc_time: 0.02 s; cycles/alloc: 95; CPU_TIME_OFFSET*N: 0.017877 s
  free_time: 0.01 s; cycles/free: 95; CPU_TIME_OFFSET*N: 0.017877 s
queue/virtual_alloc
  alloc_time: 0.76 s; cycles/alloc: 3059; CPU_TIME_OFFSET*N: 0.017845 s
  free_time: 1.22 s; cycles/free: 3059; CPU_TIME_OFFSET*N: 0.017845 s

stack/best_case
  alloc_time: 0.00 s; cycles/alloc: 2; CPU_TIME_OFFSET*N: 0.017821 s
  free_time: 0.00 s; cycles/free: 2; CPU_TIME_OFFSET*N: 0.017821 s
stack/best_case_macro
  alloc_time: 0.00 s; cycles/alloc: 1; CPU_TIME_OFFSET*N: 0.018003 s
  free_time: 0.00 s; cycles/free: 1; CPU_TIME_OFFSET*N: 0.018003 s
stack/heap_alloc
  alloc_time: 0.02 s; cycles/alloc: 91; CPU_TIME_OFFSET*N: 0.017867 s
  free_time: 0.01 s; cycles/free: 91; CPU_TIME_OFFSET*N: 0.017867 s
stack/malloc
  alloc_time: 0.02 s; cycles/alloc: 94; CPU_TIME_OFFSET*N: 0.017963 s
  free_time: 0.01 s; cycles/free: 94; CPU_TIME_OFFSET*N: 0.017963 s
stack/virtual_alloc
  alloc_time: 0.78 s; cycles/alloc: 3110; CPU_TIME_OFFSET*N: 0.017857 s
  free_time: 1.22 s; cycles/free: 3110; CPU_TIME_OFFSET*N: 0.017857 s
```
