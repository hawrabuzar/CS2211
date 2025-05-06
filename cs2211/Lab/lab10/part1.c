#include <stdio.h>
int main(void) {
	int n, sum, a[]={1,2};
	printf("Please input an integer: ");
	scanf("%d", &n);
	printf("The integer just read is: %d\n", n);
	for (int i=1; i<=n; i++ ) {
		sum += a[i];
	}
	printf("The sum from a[1] to a[%d] is %d\n", n, sum);
}
