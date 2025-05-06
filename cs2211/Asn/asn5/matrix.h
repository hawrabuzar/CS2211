#ifndef MATRIX_H
#define MATRIX_H

#include "bstree.h"

//type definitions for matrix, index, and value
typedef BStree Matrix;
typedef char* Index;
typedef int Value;

//prototypes for all the functions in matrix
Matrix matrix_construction(void);

unsigned char matrix_index_in(Matrix m, Index index1, Index index2);

Value matrix_get(Matrix m, Index index1, Index index2);

void matrix_set(Matrix m, Index index1, Index index2, Value value);

void matrix_list(Matrix m);

void matrix_deconstruction(Matrix m);

#endif
