#include <stdio.h>
#include <stdlib.h>

#include "algorithms.h"

#define SWAP(a, b) {int _temp = a; a = b; b = _temp;}

// Selection sort --------------------------------------------------------------

void selection_sort(int * arr, int n) {
  for (int i = 0; i < n-1; i++) {
    int min = i;

    for (int j = i+1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    SWAP(arr[i], arr[min]);
  }
}

// Insertion sort --------------------------------------------------------------

void insertion_sort(int * arr, int n) {
  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int p = i-1;

    while (p >= 0 && arr[p] > current) {
      arr[p+1] = arr[p];
      p--;
    }

    arr[p+1] = current;
  }
}

// Merge sort ------------------------------------------------------------------

void __merge(int * arr, int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  int i = 0;
  int j = 0;
  int k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void __mergeSort(int * arr, int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    __mergeSort(arr, l, m);
    __mergeSort(arr, m + 1, r);

    __merge(arr, l, m, r);
  }
}

void merge_sort(int * arr, int n) {
  __mergeSort(arr, 0, n - 1);
}

// Quick sort ------------------------------------------------------------------

int __partition(int * arr, int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      SWAP(arr[i], arr[j]);
    }
  }

  SWAP(arr[i + 1], arr[high]);
  return (i + 1);
}

void __quickSort(int * arr, int low, int high) {
  if (low < high) {
    int pi = __partition(arr, low, high);

    __quickSort(arr, low, pi - 1);
    __quickSort(arr, pi + 1, high);
  }
}

void quick_sort(int * arr, int n) {
  __quickSort(arr, 0, n - 1);
}

// Heap sort -------------------------------------------------------------------

void __heapify(int * arr, int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
    SWAP(arr[i], arr[largest]);
    __heapify(arr, n, largest);
  }
}

void heap_sort(int * arr, int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    __heapify(arr, n, i);

  for (int i = n - 1; i > 0; i--) {
    SWAP(arr[0], arr[i]);
    __heapify(arr, i, 0);
  }
}