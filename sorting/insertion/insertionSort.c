#include<stdio.h>
#include<stdlib.h>
#include"insertionSort.h"


/*Implementation of insertion sort, runtime O(n^2)
Takes int array and size to sort. Best runtime o(n)*/
void insertionSort(int *arr, int size){
  int i, j, temp;
  for(i=1; i<size; i++){
    temp = arr[i];
    j = i;
    while(j>0 && temp<arr[j-1]){
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = temp;
  }
}

/*Simple test for insertion sort.
Time calculation will be implemented later.*/
void testInsertionSort(){

  int test[11] = {4, 2, 8, 6, 9, 12, 32, 1, 0, 3, -3};

  insertionSort(test, sizeof(test)/sizeof(test[0]));

  int i;
  for(i=0; i<10; i++){
    printf("%d\n", test[i]);
  }

}
