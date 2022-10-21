# alloc
allocator tests

## run
```
$ python main.py
undo_cpu_time_offset.cpp
  passed

queue.cpp; best_case.cpp
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 7
  alloc_time: 0.00 s; cycles/alloc: 9; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 9
queue.cpp; best_case_macro.cpp
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 7
  alloc_time: 0.00 s; cycles/alloc: 9; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 9
queue.cpp; heap_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 191; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 191
  alloc_time: 0.02 s; cycles/alloc: 96; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.01 s; cycles/free: 96
queue.cpp; malloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 1069; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 1069
  alloc_time: 0.03 s; cycles/alloc: 108; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.01 s; cycles/free: 108
queue.cpp; noop.cpp
  alloc_time: 0.00 s; cycles/alloc: 5; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 5
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 7
queue.cpp; virtual_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 3569; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 3569
  alloc_time: 0.75 s; cycles/alloc: 2995; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 1.59 s; cycles/free: 2995

stack.cpp; best_case.cpp
  alloc_time: 0.00 s; cycles/alloc: 6; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 6
  alloc_time: 0.00 s; cycles/alloc: 8; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 8
stack.cpp; best_case_macro.cpp
  alloc_time: 0.00 s; cycles/alloc: 5; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 5
  alloc_time: 0.00 s; cycles/alloc: 9; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 9
stack.cpp; heap_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 122; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 122
  alloc_time: 0.02 s; cycles/alloc: 94; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.01 s; cycles/free: 94
stack.cpp; malloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 320; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 320
  alloc_time: 0.03 s; cycles/alloc: 106; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.01 s; cycles/free: 106
stack.cpp; noop.cpp
  alloc_time: 0.00 s; cycles/alloc: 6; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 6
  alloc_time: 0.00 s; cycles/alloc: 7; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 0.00 s; cycles/free: 7
stack.cpp; virtual_alloc.cpp
  alloc_time: 0.00 s; cycles/alloc: 3433; CPU_TIME_DELAY*N: 0.00 s; N = 10
  free_time: 0.00 s; cycles/free: 3433
  alloc_time: 0.75 s; cycles/alloc: 2985; CPU_TIME_DELAY*N: 0.01 s; N = 1000000
  free_time: 1.11 s; cycles/free: 2985
```
