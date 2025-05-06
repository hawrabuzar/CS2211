#include "matrix.h"
#include "bstree.h"
#include "datatype.h"
#include <stdio.h>

//constructs matrix using bst_ini()
Matrix matrix_construction(void){
	Matrix m = (Matrix) bstree_ini();
	return m;
}
//checks if location is defined in matrix, returns 1 is it is otherwise returns nothing
unsigned char matrix_index_in(Matrix m, Index index1, Index index2){
	Key key = key_ini();
	key_set(key,index1,index2);
	Data found = bstree_search(m, key);
	key_free(key);
	return (found != NULL);
}
//checks if location is defined in matrix, returns value if it is otherwise returns -1 with reported error
Value matrix_get(Matrix m, Index index1, Index index2) {
	Key key = key_ini();
        key_set(key,index1,index2);
	Data found = bstree_search(m, key);
        key_free(key);
	if(found == NULL)
		return -1;
	
	return *found;
	
}
//assigns value to given location, if location has value then it overwrites it
void matrix_set(Matrix m, Index index1, Index index2, Value value) {
	Key key = key_ini();
	key_set(key, index1,index2);

	Data exists = bstree_search(m, key);
	if(exists){
		*exists = value;
		key_free(key);
	}
	else{
		Data data = data_ini();
		data_set(data, value);
		bstree_insert(m,key,data);
	}
}
//prints indices and values in the matrix
void matrix_list(Matrix m){

	printf("String 1 String 2 Occurrence\n");
	bstree_traverse(m);
}
//frees allocated space within matrix
void matrix_deconstruction(Matrix m){
	bstree_free(m);
}
