#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linkedList.h"

int main(int argc, char** argv){

  node *head = calloc(1, sizeof(node));
  node *current = calloc(1, sizeof(node));

  strncpy(head->data, "Hello World", 12);

  printf("%s\n", head->data);

  free(current);
  free(head);
  return 0;
}
