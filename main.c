#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linkedList.h"


/* Starting point */
int main(int argc, char** argv){

  node *head;
  head = createList();

  add(head, "Sup gurl!");
  add(head, "Sup pinna!");
  add(head, "This is really neat");

  printList(head);

  destoryList(head);
  return 0;
}
