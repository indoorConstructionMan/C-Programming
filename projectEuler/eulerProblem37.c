#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>


int length(long number){
  int len = 0, num = number;
  while(1==1){
      len++;
      if(num<10)  break;
      num/=10;
  }
  return len;
}


bool isPrime(long number){
  if (number < 2) return false;
  int i;
  for(i=2; i<number; i++){
    if(number%i == 0) return false;
  }
  return true;
}


bool leftToRight(long number){
  int i, len = length(number);
  if(len==1) return false;
  for(i=0; i<len; i++){
    if(!isPrime(number)) return false;
    number%=(long int) pow(10, (int) length(number)-1);
  }
  return true;
}


bool rightToLeft(long number){
  int i, len = length(number);
  if(len==1) return false;
  for(i=0; i<len; i++){
    if(!isPrime(number)) return false;
    number/=10;
  }

  return true;
}


void problem37(){
  int count=0, i=0, sum=0;
  while(count != 11){
    i++;
    if(rightToLeft(i) && leftToRight(i)){
      sum+=i;
      printf("Value == %d\tCurrent sum = %d\n", i, sum);
      count++;
    }
  }
  printf("Total sum == %d\n\n\n", sum);
}


/* Starting point */
int main(int argc, char** argv){
  problem37();

  return 1;
}
