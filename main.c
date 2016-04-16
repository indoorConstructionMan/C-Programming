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
  add(head, "This is really neat, I dont know how many characters is 50 but this should be good.");

  insert(head, 2, "myData");
  insert(head, 5, "should be set to end");

  /*This insert is broken, doesn't set head to new head...*/
  insert(head, 0, "should be set to the front");

  printf("%d\n", listLength(head));

  printList(head);
  destoryList(head);
  return 0;
}
