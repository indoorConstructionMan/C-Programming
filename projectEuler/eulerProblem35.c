#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


bool isPrimeNumber(int number){
  if(number <= 1) return false;
  else {
    int i;
    for(i=2; i<number/2+1; i++){
      if(number%i == 0) return false;
    }
    return true;
  }
}


char* circulate(char* buff){
  char *returnString = calloc(7, sizeof(char));
  char first = *buff;
  buff++;
  int i, count=0;
  for(i=0; i<strlen(buff); i++){
    *returnString = buff[i];
    returnString++;
    count++;
    if(i == strlen(buff)-1){
      *returnString = first;
    }
  }
  returnString-=count;

  return returnString;
}


bool isCircularPrime(int number){
  char buffer[7];
  snprintf(buffer, 7, "%d", number);
  int length = strlen(buffer);
  char *temp = calloc(7, sizeof(char));

  int i;
  strncpy(temp, buffer, 7);
  for(i=0; i<length; i++){
    if(!isPrimeNumber(atoi(temp))) return false;
    temp = circulate(buffer);
    strncpy(buffer, temp, 7);
  }

  return true;
}

/* Starting point Still need to free all memory...currently not doing that...
*  still gets me the correct number.
*
*/
int main(int argc, char** argv){
  FILE *fp = fopen("primeNumbers.txt", "r+");
  int primes[78498], i=0;
  while(fscanf(fp, "%d\n", &primes[i]) != EOF){
    i++;
  }

  int answer = 0;
  for(i=0; i<78498; i++){
    if(isCircularPrime(primes[i])) answer++;
    //printf("isCircular -> %d\n", isCircularPrime(primes[i]));
  }

  printf("The answer is %d\n", answer);

  fclose(fp);
  return 0;
}


// FILE *fp = fopen("primeNumbers.txt", "w+");
// int primes[78498], i, count=0;
// for(i=0; i<1000000; i++){
//   if(isPrimeNumber(i) == true){
//     primes[count] = i;
//     count++;
//   }
// }
//
// for(i=0; i<count; i++){
//   fprintf(fp, "%d\n", primes[i]);
// }
//
// printf("%d\n", count);
