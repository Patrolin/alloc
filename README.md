# alloc
allocator tests

## run
```
$ python main.py
queue/best_case
  alloc_time: 0.00 s; cycles/alloc: 66; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 66
  alloc_time: 0.02 s; cycles/alloc: 63; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.02 s; cycles/free: 63
queue/best_case_macro
  alloc_time: 0.00 s; cycles/alloc: 33; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 33
  alloc_time: 0.02 s; cycles/alloc: 61; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.02 s; cycles/free: 61
queue/heap_alloc
  alloc_time: 0.00 s; cycles/alloc: 218; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 218
  alloc_time: 0.04 s; cycles/alloc: 143; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.03 s; cycles/free: 143
queue/malloc
  alloc_time: 0.00 s; cycles/alloc: 436; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 436
  alloc_time: 0.04 s; cycles/alloc: 164; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.03 s; cycles/free: 164
queue/virtual_alloc
  alloc_time: 0.00 s; cycles/alloc: 4528; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 4528
  alloc_time: 0.80 s; cycles/alloc: 3217; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 1.19 s; cycles/free: 3217

stack/best_case
  alloc_time: 0.00 s; cycles/alloc: 65; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 65
  alloc_time: 0.02 s; cycles/alloc: 62; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.02 s; cycles/free: 62
stack/best_case_macro
  alloc_time: 0.00 s; cycles/alloc: 33; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 33
  alloc_time: 0.02 s; cycles/alloc: 63; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.01 s; cycles/free: 63
stack/heap_alloc
  alloc_time: 0.00 s; cycles/alloc: 98; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 98
  alloc_time: 0.04 s; cycles/alloc: 141; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.02 s; cycles/free: 141
stack/malloc
  alloc_time: 0.00 s; cycles/alloc: 444; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 444
  alloc_time: 0.04 s; cycles/alloc: 146; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 0.03 s; cycles/free: 146
stack/virtual_alloc
  alloc_time: 0.00 s; cycles/alloc: 3568; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 3568
  alloc_time: 0.82 s; cycles/alloc: 3284; CPU_TIME_OFFSET*N: 0.02 s; N = 1000000
  free_time: 1.21 s; cycles/free: 3284
```
