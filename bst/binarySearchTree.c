#include<stdio.h>
#include<stdlib.h>
#include"binarySearchTree.h"

/*Allocates root node, sets l & r child t0 NULL*/
tree *init(){
  tree *initTree = calloc(1, sizeof(tree));
  initTree->value = -1;
  initTree->lchild = NULL;
  initTree->rchild = NULL;
  return initTree;
}


/*Working on a scalable print tree function,
currently doesn't work to my liking
Function == BUGGY*/
void printTree(tree *myTree, tree *myRoot){
  tree *left = myTree->lchild;
  tree *right = myTree->rchild;
  int lflag=0, rflag=0;


  if(myTree == myRoot){
    printf("\nPrinting tree...\n\n");
    printf("\t| %d |\n", myTree->value);
  }

  if(left != NULL){
    printf("| %d |\t\t", left->value);
    lflag = 1;
  }

  if(right != NULL) {
    printf("| %d |\n", right->value);
    rflag = 1;
  }

  if(lflag) printTree(left, myRoot);

  if(rflag) printTree(right, myRoot);
}


/*Insert value in tree using value val*/
void insert(tree *myTree, int val){
  tree *currentNode;
  currentNode = myTree;

  /*If mytree has no root value, set it to val*/
  if(currentNode->value == 4294967295)  currentNode->value = val;

  /*The root value has been set, find out where to insert val*/
  else {

    while(1){
      if(currentNode->value < val){
        if(currentNode->rchild == NULL){
          currentNode->rchild = calloc(1, sizeof(tree));
          currentNode->rchild->value = val;
          break;
        } else {
          currentNode = currentNode->rchild;
        }
      } else {
        if(currentNode->lchild == NULL){
          currentNode->lchild = calloc(1, sizeof(tree));
          currentNode->lchild->value = val;
          break;
        } else {
          currentNode = currentNode->lchild;
        }
      }
    }

  }
}


/*Frees all memory using recursion*/
void destroyTree(tree *myTree){
  tree *leftNode = myTree->lchild;
  tree *rightNode = myTree->rchild;

  if(myTree != NULL){
    if(leftNode != NULL) destroyTree(leftNode);
    if(rightNode != NULL) destroyTree(rightNode);
    free(myTree);
  }

}
