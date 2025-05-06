#include <stdio.h>

int main(){

	int a, b, c, d;
	int largest, smallest;

	printf("\nEnter four integers:");
	scanf( "%d %d %d %d", &a, &b, &c, &d);

	largest = a;
	smallest = b;

	if(a < b){
		largest = b;
		smallest = a;
	}

	if(c > largest){
		largest = c;
	}
	else if(c < smallest){
		smallest = c;
	}

	if(d > largest){
		largest = d;
	}
	else if(d < smallest){
	       smallest = d;
	}

	printf("Largest Integer: %d\n", largest);
	printf("Smallest Integer: %d\n", smallest);

	return 0;
}
