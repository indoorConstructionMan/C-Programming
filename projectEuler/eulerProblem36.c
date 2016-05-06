#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>



char intToChar(int num){
  char ret = '\0';
  switch(num){
    case 0:
      ret = '0';
      break;
    case 1:
      ret = '1';
      break;
    case 2:
      ret = '2';
      break;
    case 3:
      ret = '3';
      break;
    case 4:
      ret = '4';
      break;
    case 5:
      ret = '5';
      break;
    case 6:
      ret = '6';
      break;
    case 7:
      ret = '7';
      break;
    case 8:
      ret = '8';
      break;
    case 9:
      ret = '9';
      break;
    default:
        ret = 'x';
        break;
  }
  return ret;
}


char* reverse(char *stringRev){
  int length = strlen(stringRev)-1;
  char* ret = calloc(length, sizeof(char));
  int i;
  for(i=0; i<length+1; i++){
    strncat(ret, &stringRev[length-i], 1);
  }
  return ret;
}


char* intToString(int number, int base){
  int count = 0;
  if(base == 10){
    char* str = calloc(8, sizeof(char));
    sprintf(str, "%d", number);
    return str;
  } else if (base == 2){
    char *temp = calloc(25, sizeof(char));
    bzero(temp, 25);
    while(number>0){
      int rem = number%2;
      char xe = intToChar(rem);
      strncat(temp, &xe, 1);
      count++;
      number/=2;
    }
    char* ret = reverse(temp);
    // free(temp);
    return ret;
  } else {
    printf("Could not convert to base %d\n", base);
  }
  return NULL;
}


bool isPalindromic(int number){
  bool flag = true;
  if(!strncmp(intToString(number, 10), reverse(intToString(number, 10)), strlen(intToString(number, 10)))){
      if(number==3) printf("base 10 palindromic\n");
    flag = false;
  }
  if(!flag && !strncmp(intToString(number, 2), reverse(intToString(number, 2)), strlen(intToString(number, 2)))){
      if(number==3) printf("base 2 palindromic\n");
    return true;
  }

  return false;
}

void problem36(){
  int i, sum=0;
  for(i=1; i<1000000; i++){
    if(i==3) printf("%d\t \n", isPalindromic(3));
    if(isPalindromic(i)){
      if(i==3) printf("adding\n");
      printf("Decimal: %d\tBinary: %s\n", i, intToString(i, 2));
      sum+=i;
      if(i==3) printf("added\n");
    }
  }
  printf("\nSum of all numbers, less than one million, which are palindromic in base 10 and base 2 == %d\n", sum);

  printf("\nisPalindromic: %d\n", isPalindromic(3));
}

/* Starting point */
int main(int argc, char** argv){
  problem36();

  return 1;
}
