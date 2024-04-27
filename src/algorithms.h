#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_

#define ARRAY_SIZE 10000

// ------ UTILITIES -------

int * get_ascending_array();
int * get_descending_array();
int * get_random_array();

// ------ ALGORITHMS ------

void selection_sort(int * arr, int n);
void insertion_sort(int * arr, int n);
void merge_sort(int * arr, int n);
void quick_sort(int * arr, int n);
void heap_sort(int * arr, int n);

void faster_quick_sort(int * arr, int n);

#endif /* ALGORITHMS_H_ */