#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linkedList.h"


/* Function prototypes */
node *createList();
void destoryList(node *head);
void add(node *head, char *data);
void printList(node *head);


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
      strncpy(head->data, myData, strlen(myData));
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
      printf("%s\n", current->data);
      current = (node*) current->next;
    }
  }
}
