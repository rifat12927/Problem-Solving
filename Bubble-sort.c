#include <stdio.h>

void bubbleSort(int array[], int size) {
     int i,j,temp;
    for (i= 0; i< size - 1; i++) {
    for (j= 0; j< size - i - 1; j++) {


      if (array[j] > array[j + 1]) {


        temp = array[j];
        array[j] = array[j+1];
        array[j+ 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}
