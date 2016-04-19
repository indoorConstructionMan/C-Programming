#include<stdio.h>
#include<stdlib.h>
#include"bst/binarySearchTree.h"

/* Starting point */
int main(int argc, char** argv){

  tree *root = init();

  insert(root, 100);
  insert(root, 50);
  insert(root, 33);
  insert(root, 134);
  insert(root, 155);
  insert(root, 201);
  insert(root, 1);
  insert(root, 2);

/*
                100
            50       134
        33               155
      1                        201
        2


*/

  printTree(root, root);

  destroyTree(root);

  return 0;
}
