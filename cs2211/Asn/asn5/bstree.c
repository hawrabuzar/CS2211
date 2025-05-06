#include "bstree.h"
#include "datatype.h"
#include <stdio.h>
#include <stdlib.h>

//dynamically allocates memory for the bst
BStree bstree_ini() {
	BStree bst = (BStree)malloc(sizeof(BStree_node));
	*bst = NULL;
	return bst;
}

//helper for insert function to create a pointer to a node with key and data
BStree_node *new_node(Key key, Data data) {
	BStree_node *node = (BStree_node *)malloc(sizeof(BStree_node));
	node->key = key;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
//uses recursion to insert key into the binary search tree.if key is in tree, do nothing
void bstree_insert(BStree bst, Key key, Data data){
	BStree_node * n = new_node(key,data);
	if (*bst == NULL){
		*bst = n;
		return;
	}
	BStree_node root = **bst;
	if(key_comp(root.key,key) < 0) {
		if(root.right == NULL)
			(**bst).right = n;
		else 
			bstree_insert(&root.right, key, data);
	}
	else if(key_comp(root.key,key) > 0){
		if(root.left == NULL)
			(**bst).left = n;
		else
			bstree_insert(&root.left, key, data);
	}
}
//if the key is in the tree, returns keys data recursively, otherwise does nothing
Data bstree_search(BStree bst, Key key){

	if(*bst == NULL)
		return NULL;

	if(key_comp((*bst)->key,key) == 0){
		return (*bst)->data;
	} 
	else if(key_comp((*bst)->key,key)<0){
		if((*bst)->right ==NULL)
			return NULL;
		else
			return bstree_search(&(*bst)->right, key);
	}
	else{
		if((*bst)->left ==NULL)
			return NULL;
		else
			return bstree_search(&(*bst)->left, key);
	}

	return NULL;
}

//performs recursive in order traversal of bst and prints each nodes key and data
void bstree_traverse(BStree bst){
	if(*bst == NULL){
		return;
	}
	BStree_node root = **bst;		
	if (root.left != NULL)
		bstree_traverse(&root.left);
	key_print(root.key);
	data_print(root.data);
	if (root.right != NULL)	
		bstree_traverse(&root.right);

}
//dymanically frees allocated memory for bst
void bstree_free(BStree bst){
	if(*bst == NULL){
		return;
	}
	bstree_free(&(*bst)->left);
	bstree_free(&(*bst)->right);
	free(*bst);

}

