#include<stdio.h>
#include<stdlib.h>
#include"binarySearchTree.h"


tree *init(){
  tree *initTree = calloc(1, sizeof(tree));
  initTree->value = -1;
  initTree->lchild = NULL;
  initTree->rchild = NULL;
  return initTree;
}

void printTree(tree *myTree){
  printf("placeholder function\n");
}

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

void destroyTree(tree *myTree){
  free(myTree);
}
