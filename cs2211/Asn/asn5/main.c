#include "matrix.h"
#include <stdio.h>

int main(){
	Matrix m = matrix_construction();
	char s1[100], s2[100];

	while (scanf("%s %s", s1, s2) == 2) {
		if (matrix_index_in(m, s1, s2)) {
			int val = matrix_get(m, s1, s2);
			matrix_set(m, s1, s2, val + 1);
		} else {
			matrix_set(m, s1, s2, 1);
		}
	}

	matrix_list(m);
	matrix_deconstruction(m);
	return 0;

}	
