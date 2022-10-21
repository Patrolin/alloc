# alloc
allocator tests

## run
```
$ python main.py
queue.cpp; best_case.cpp
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 7
  alloc_time: 0.00 s; cycles/alloc: 6; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 6
queue.cpp; best_case_macro.cpp
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 8
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 8
queue.cpp; heap_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 782; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 782
  alloc_time: 0.03 s; cycles/alloc: 105; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.02 s; cycles/free: 105
queue.cpp; malloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 630; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 630
  alloc_time: 0.03 s; cycles/alloc: 122; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.02 s; cycles/free: 122
queue.cpp; noop.cpp
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 8
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 7
queue.cpp; virtual_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 3842; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 3842
  alloc_time: 0.71 s; cycles/alloc: 2828; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 1.14 s; cycles/free: 2828

stack.cpp; best_case.cpp
  alloc_time: 0.00 s; cycles/alloc: 11; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 11
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 8
stack.cpp; best_case_macro.cpp
  alloc_time: 0.00 s; cycles/alloc: 9; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 9
  alloc_time: 0.00 s; cycles/alloc: 9; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 9
stack.cpp; heap_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 558; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 558
  alloc_time: 0.03 s; cycles/alloc: 107; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.02 s; cycles/free: 107
stack.cpp; malloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 645; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 645
  alloc_time: 0.03 s; cycles/alloc: 117; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.02 s; cycles/free: 117
stack.cpp; noop.cpp
  alloc_time: 0.00 s; cycles/alloc: 6; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 6
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 0.00 s; cycles/free: 8
stack.cpp; virtual_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 3856; CPU_TIME_OFFSET*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 3856
  alloc_time: 0.71 s; cycles/alloc: 2828; CPU_TIME_OFFSET*N: 0.04 s; N = 1000000
  free_time: 1.13 s; cycles/free: 2828
```
