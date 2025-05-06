#include "datatype.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//initialize key function
Key key_ini(void){
	Key key = (Key)malloc(sizeof(Key_struct)); //dymanically allocates space for keys and returns
		return key;
}

void key_set(Key key, char *skey1, char *skey2){ // copies strings with skey1 and skey2
	 key->skey1 = string_dup(skey1);
	 key->skey2 = string_dup(skey2);
}

int key_comp(Key key1, Key key2){ //uses strcmp() to do comparison
	
	Key *k1 = &key1, *k2 = &key2;

	if(k1 == NULL && k2==NULL){
		return 0;
	}
	else if (k1 ==NULL){
		return -1;
	}
	else if(k2 == NULL){
		return 1;
	}
//determines result based on whether key1->skey1 and key2->skey1 are the same/different
	if(strcmp(key1->skey1, key2->skey1))
		return strcmp(key1->skey1, key2->skey1);
	else
		return strcmp(key1->skey2,key2->skey2);
}
//if key is null then nothing is returned, otherwise, key1 and key2 are printed
void key_print(Key key) {
 if (key == NULL) {
        printf("Error: NULL key encountered.\n");
        return;
    }

	printf("%s %10s\n", key->skey1, key->skey2);
}
//free allocated memory key free
void key_free(Key key){
	free( key->skey1);
	free( key->skey2);
	free(key);
}

char *string_dup(char *str){
	char *dup = (char *)malloc(strlen(str) + 1);
	strcpy(dup, str);
	return dup;
}

Data data_ini() {
	Data data = (Data)malloc(sizeof(int));
	return data;
}

void data_set(Data data, int intdata){
	*data = intdata;
}

void data_print(Data data){
	printf("%20d\n", *data);
}

void data_free(Data data){
	free(data);
}
