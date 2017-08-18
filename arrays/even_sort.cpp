#include "./even_sort.h"

/*
 Given an array of integers, reorder the array such that even entries appear first
*/

void swap(int * const data, int a, int b) {
  int temp = data[a];
  data[a] = data[b];
  data[b] = temp;
}

void even_sort(int * data, int count) {
  int last_even_index = count - 1;
  for (int i = 0; i < count; i++) {
    if (data[i] % 2 != 0) {
      bool found = false;
      for (int j = last_even_index; j > i; j--) {
        if (data[j] % 2 == 0) {
          swap(data, i, j);
          last_even_index = j;
          found = true;
          break;
        }
      }

      if (!found) {
        break;
      }
    }
  }
}
