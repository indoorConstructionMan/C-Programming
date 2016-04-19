#pragma once

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H


typedef struct tree {
  unsigned int value;
  struct tree *lchild;
  struct tree *rchild;
} tree;


tree *init();
void printTree(tree *myTree);
void insert(tree *myTree, int val);
void destroyTree(tree *myTree);

#endif
