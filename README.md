# Para compilação

## Testar Tempo de Selection Sort

Sistemas UNIX like (linux, macos, etc):
```bash
make slection_sort_time
```

Com gcc:
```bash
gcc -I src src/algorithms.c src/utilities.c time_selection_sort_test.c -o out
```

## Testar Tempo de Insetion Sort

Sistemas UNIX like (linux, macos, etc):
```bash
make insertion_sort_time
```

Com gcc:
```bash
gcc -I src src/algorithms.c src/utilities.c time_insertion_sort_test.c -o out
```

## Testar Tempo Merge Sort

Sistemas UNIX like (linux, macos, etc):
```bash
make merge_sort_time
```

Com gcc:
```bash
gcc -I src src/algorithms.c src/utilities.c time_merge_sort_test.c -o out
```

## Testar Tempo Quick Sort

Sistemas UNIX like (linux, macos, etc):
```bash
make quick_sort_time
```

Com gcc:
```bash
gcc -I src src/algorithms.c src/utilities.c time_quick_sort_test.c -o out
```

## Testar Tempo Heap Sort

Sistemas UNIX like (linux, macos, etc):
```bash
make heap_sort_time
```

Com gcc:
```bash
gcc -I src src/algorithms.c src/utilities.c time_heap_sort_test.c -o out
```