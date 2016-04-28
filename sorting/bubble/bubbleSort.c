#include<stdio.h>
#include<stdlib.h>
#include"bubbleSort.h"

/*Bubble sort algorithm.
go through array, each Time
decrease check by 1.
if element at index i-1 is larger, swap
continue till sorted.*/
void bubbleSort(int *arr, int size){
  int i, j, sorted=0;
  for(j=size; j>0; j--){
    for(i=1; i<size-sorted; i++){
      if(arr[i] < arr[i-1]){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
      }
    }
    sorted++;
  }
}

/*Test to see if bubble sort actually works*/
void testBubbleSort(){
  int myArr[7] = {3,9,1,2,6,7,5};

  bubbleSort(myArr, sizeof(myArr)/sizeof(myArr[0]));

  int i;
  for(i=0; i<7; i++){
    printf("%d  ", myArr[i]);
  }
  printf("\n");
}
