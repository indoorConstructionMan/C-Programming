#include<stdio.h>
#include<stdlib.h>
#include"selectionSort.h"


/*Iterate from sorted to end, grab index of min value
swap value at grabbed index, with sorted index, increment
sorted and then repeat until sorted = length of array*/
void selectionSort(int *arr){
  int sorted_index=0, current_index, min_index=0;
  while(sorted_index < 11){
    for(current_index=sorted_index; current_index<11; current_index++){
      if(arr[current_index] < arr[min_index]){
        min_index = current_index;
      }
    }

    if(min_index > sorted_index){
      int temp = arr[sorted_index];
      arr[sorted_index] = arr[min_index];
      arr[min_index] = temp;
    } else {
      min_index++;
    }

    sorted_index++;
  }

}

/*test selection sort method*/
void testSelectionSort(){
  int test[11] = {4, 2, 8, 6, 9, 12, 32, 1, 0, 3, -3};

  selectionSort(test);

  int i;
  for(i=0; i<11; i++){
      printf("%d\n", test[i]);
  }
}
