#include<stdio.h>
#include<stdlib.h>
#include"bst/binarySearchTree.h"

/* Starting point */
int main(int argc, char** argv){

  tree *root = init();

  insert(root, 100);
  insert(root, 200);
  insert(root, 1);
  insert(root, 2);

  printTree(root);

  destroyTree(root);

  return 0;
}
