#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct node {
    char data[50];
    struct node *next;
} node;

/* Function prototypes */
node *createList();
void destoryList(node *head);
void add(node *head, char *data);
void printList(node *head);
void insert(node *head, int index, char *myData);
int listLength(node *head);


#endif
