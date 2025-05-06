#ifndef BSTREE_H
#define BSTREE_H

#include "datatype.h"
//type definitions for binary search trees
typedef struct BStree_node {
	Key key;
	Data data;
	struct BStree_node *left, *right;
} BStree_node;

typedef BStree_node** BStree;

//prototypes for all bst functions
BStree bstree_ini();
void bstree_insert(BStree bst, Key key, Data data);
Data bstree_search(BStree bst, Key key);
void bstree_traverse(BStree bst);
void bstree_free(BStree bst);

#endif
