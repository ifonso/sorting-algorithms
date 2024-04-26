#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "src/algorithms.h"

int main(int argc, char ** argv) {
  clock_t start, end;
  double cpu_time_used;

  int * ordered_arr = get_ascending_array();
  int * reversed_arr = get_descending_array();
  int * random_arr = get_random_array();

  start = clock();
  heap_sort(ordered_arr, ARRAY_SIZE);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  printf("Heap sort on ordered array: %f s\n", cpu_time_used);
  printf("\n");

  start = clock();
  heap_sort(reversed_arr, ARRAY_SIZE);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  printf("Heap sort on reversed array: %f s\n", cpu_time_used);
  printf("\n");

  start = clock();
  heap_sort(random_arr, ARRAY_SIZE);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  printf("Heap sort on random array: %f s\n", cpu_time_used);
  printf("\n");

  return 0;
}