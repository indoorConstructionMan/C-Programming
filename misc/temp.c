#include<stdio.h>
#include<stdlib.h>

void sum1(int array[], int size){
  int i, sum=0;
  for(i=0; i<size; i++){
    sum+=array[i];
  }
  printf("The sum is %d\n", sum);
}

void sum2(int array[], int size){
  int i=0, sum=0;
  while(i<size){
    sum += array[i];
    i++;
  }

  printf("The sum is %d\n", sum);
}


int sum3(int array[], int size){
  int sum = array[0];
  if(size == 0) return 0;
  else {
    array++;
    return sum + sum3(array, size-1);
  }
}

/* Starting point */
int main(int argc, char** argv){

  int arr[5] = {1,0,3,8,5};

  sum1(arr, 5);
  sum2(arr, 5);
  printf("Final summation == %d\n", sum3(arr,5));
}
