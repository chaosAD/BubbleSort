#include "BubbleSort.h"

void compareAndSwap(int *first, int *second) {
  int temp;
  
  if(*first > *second) {
    temp = *second;
	*second = *first;
	*first = temp;
  }
}

void sortLargestToRightMost(int *array, int size) {
  int i;
    
  for(i = 0; i < size - 1; i++) {
	compareAndSwap(&array[i], &array[i+1]);
  }
}

void bubbleSort(int *array, int size) {
  // sortLargestToRightMost(array, 3);
  // sortLargestToRightMost(array, 2);

   for( ; size >= 2; size--) {
	 sortLargestToRightMost(array, size);
   }
}