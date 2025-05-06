#include <stdio.h>


int sum_two_dimensional_array(int *a, int row, int col)
{
	int *p, sum = 0;
	for ( p = a; p < a + (col * row); p++){
			sum += *p;
	}

	return sum;
}

int main() {
    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int sum = sum_two_dimensional_array((int*)array, 2, 3);
    printf("Sum: %d\n", sum);

    return 0;
}
