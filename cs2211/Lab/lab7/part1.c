#include <stdio.h>

	int sum_array(const int *arr, int n)
	{
		int sum = 0;
		for ( int i = 0; i < n; i++){
			sum += *(arr + i);
		}
			
		return sum;
	}

int main(){
	int a[] = {1,2,3,4,5};
	int size = 5;
	int ans = sum_array(a, size);

	printf("Sum = ", ans);

	return 0;
}	
