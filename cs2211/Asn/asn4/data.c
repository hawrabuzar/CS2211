#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"
// Input: ’in_name’: a string ends with ’\0’
// ’in_num’: an integer
// Output: a Key,
// Effect: dynamic allocate memory for Key’s name
// and copy in_name to Kiey’s name
// set Key’s num to be in_num
Key key_construct(char *in_name, int in_num) {
	Key newKey;
	
	newKey.name = strdup(in_name);
	newKey.num = in_num;
		
	return newKey;

}

// Input: ’key1’ and ’key2’ are two Keys
// Output: if return value < 0, then key1 < key2,
// if return value = 0, then key1 = key2,
// if return value > 0, then key1 > key2,
// Note: use strcmp() to compare key1.name and key2.name
// if key1.name = key2.name, then compare key1.num with key2.num
int key_comp(Key key1, Key key2) {
	int cmp = strcmp(key1.name,key2.name);

	if(cmp !=0){
		return cmp;
	}

	
	return key1.num - key2.num;
	
}

// Input: ’key’: a Key
// Effect: key.num key.name are printed
void print_key(Key key) {
	printf("name: %s, num: %d", key.name, key.num);
}
// Input: ’node’: a node
// Effect: node.key is printed and then the node.data is printed
void print_node(Node node) {
        print_key(node.key);
	puts(node.data);

}
