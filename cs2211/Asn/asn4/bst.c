#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

BStree bstree_ini(int size) {
	BStree bst;

	bst.tree_nodes = (Node *) malloc((size + 1) * sizeof(Node));

	bst.is_free = (unsigned char *) malloc((size + 1) * sizeof(unsigned char));
	for (int i =0; i < size+1; i++){
		bst.is_free[i] = 1;
	}
	bst.size = size;
	return bst;
}

void insert_helper(BStree bst, int i, Node n){

	if (i >= bst.size)
	{
		printf("Out of range.\n");
		return;
	}
	//If the entry at given index is free then node will be placed there and marked as taken
		if(bst.is_free[i] == 1) {                                           
			bst.tree_nodes[i]=n;
			bst.is_free[i] = 0;
		}

		//compares the key with current nodes key to determine where node will be placed.
		else if(key_comp(bst.tree_nodes[i].key, n.key) > 0){
		//if key num is greater than current nodes key then move index to next odd place
			insert_helper(bst,2 * i, n); 
		}

		//if key is less than current nodes key num then move to the next even place
		else if(key_comp(bst.tree_nodes[i].key, n.key) < 0 ){
                        insert_helper(bst, 2 * i + 1, n);  
		}
     
}

void bstree_insert(BStree bst, Key key, char *data) {
	
	int i = 1;
	Node n;
	n.key = key;
	n.data = data;

	insert_helper(bst, i, n);

}



void traversal_helper(BStree bst, int index) {
	if(index >= bst.size || bst.is_free[index] == 1){
		return;
	
	}
			traversal_helper(bst, index*2);

		if (bst.is_free[index] == 0) {
			printf("%d, %s, %s\n", bst.tree_nodes[index].key.num, bst.tree_nodes[index].key.name, bst.tree_nodes[index].data);
    		}
            traversal_helper(bst,2 *index + 1);

}
void bstree_traversal(BStree bst) {
	traversal_helper(bst, 1);
}

void bstree_free(BStree bst) {
	free(bst.tree_nodes);
	free(bst.is_free);
}
