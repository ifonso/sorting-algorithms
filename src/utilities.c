#include <stdlib.h>
#include <stdio.h>

#include "algorithms.h"

int * get_ascending_array() {
  int * arr = (int *) malloc(ARRAY_SIZE * sizeof(int));

  for (int i = 0; i < ARRAY_SIZE; i++) {
    arr[i] = i;
  }

  return arr;
}

int * get_descending_array() {
  int * arr = (int *) malloc(ARRAY_SIZE * sizeof(int));

  for (int i = 0; i < ARRAY_SIZE; i++) {
    arr[i] = ARRAY_SIZE - i;
  }

  return arr;
}

int * get_random_array() {
  FILE * file;
  int * arr = (int *) malloc(ARRAY_SIZE * sizeof(int));
  int count = 0;
  
  file = fopen("random_numbers.md", "r");
  if (file == NULL) {
    perror("Error opening random_numbers.md file");
    exit(1);
  }

  while (fscanf(file, "%d", &arr[count]) == 1) {
    count++;
  }

  fclose(file);
  
  return arr;
}
