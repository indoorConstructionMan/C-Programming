#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linkedList.h"


/* returns a new list */
node *createList(){
  node *head = NULL;
  head = calloc(1, sizeof(node));
  head->next = '\0';
  return head;
}


/* destorys list given head */
void destoryList(node *head){
  node *current;
  int i, count = 0;

  current = head;
  while(1){
    if(current->next == NULL){
      for(i=0; i<count; i++){
        current = (node *)head->next;
        free(head);
        head = current;
      }
      break;
    } else {
      current = (node*) current->next;
      count++;
    }
  }
}


/* adds to existing list myData */
void add(node *head, char *myData){
  while(1){
    if(head->next == NULL){
      int length = strlen(myData);
      if(strlen(myData) > 50) length = 50;
      strncpy(head->data, myData, length);
      head->next = calloc(1, sizeof(node));
      break;
    } else {
      head = (node*) head->next;
    }
  }
}


/*Takes the head of the node, and prints all elements in list*/
void printList(node *head){
  node *current;
  current = head;

  while(1){
    if(current->next == NULL){
      break;
    } else {
      printf("%s.\n", current->data);
      current = (node*) current->next;
    }
  }
}



/*Insert at index index, placing myData there.
* if index greater, set to end.
* if 0 or less, add to front
* else insert at position given current head node
*/
void insert(node **head, int index, char *myData){
  node *current, *previous;
  current = *head;

  int length = strlen(myData);
  if(length > 50) length = 50;
  node *newNode = calloc(1, sizeof(node));
  strncpy(newNode->data, myData, length);

  if(index > listLength(*head)) add(*head, myData);
  else if (index <= 0){
    *head = newNode;
    newNode->next = current;
  } else {
    int i;
    for(i=0; i<index; i++){
      previous = current;
      current = (node*) current->next;
    }
    previous->next = newNode;
    newNode->next = current;
  }
}


/*Determines and returns the length of the list*/
int listLength(node *head){
  node *current;
  int count=0;
  current = head;

  while(1){
    if(current->next == NULL){
      return count;
    } else {
      count++;
      current = (node*) current->next;
    }
  }
}
