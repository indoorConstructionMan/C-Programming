#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linkedList.h"


/* Starting point */
int main(int argc, char** argv){
  /*Start of linked list*/
  node *head;

  /*Testing createList function*/
  head = createList();

  /*Testing add function*/
  add(head, "Sup gurl!");
  add(head, "Sup pinna!");
  add(head, "This is really neat");
  add(head, "This is really neat, I dont know how many characters is 50 but this should be good.");

  /*Testing insert method*/
  insert(&head, 2, "myData");
  insert(&head, 5, "should be set to end");
  insert(&head, 0, "should be set to the front");

  /*Testing printList and destoryList methods.*/
  printList(head);
  destoryList(head);

  return 0;
}
