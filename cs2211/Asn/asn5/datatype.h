#ifndef DATATYPE_H
#define DATATYPE_H
//type definitions for key and data
typedef struct {char *skey1; char *skey2;} Key_struct;
typedef Key_struct* Key;
typedef int* Data;

//prototypes for all functions in datatype
Key key_ini();

void key_set(Key key, char *skey1, char *skey2);

int key_comp(Key key1, Key key2);

void key_print(Key key);

void key_free(Key key);

char *string_dup(char *str);

Data data_ini();

void data_set(Data data, int intdata);

void data_print(Data data);

void data_free(Data data);

#endif
