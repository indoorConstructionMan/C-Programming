#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct NODE {
    char data[50];
    struct node *next;
} node;

/* Function prototypes */
node *createList();
void destoryList(node *head);
void add(node *head, char *data);
void printList(node *head);

#endif
