#include <stdio.h>

//Function which takes input integer x and outputs factorial of x
int factorial(int x)
{
	if (x < 1)
	{
		return 1;
	}

	int rslt = 1;
 // Loop to multiply all numbers from x down to 1
	for (int i = x; i > 1; i --)
		rslt *= i;

	return rslt;
}

int main()
{
	double limit, add, sum = 1;
	int next = 1;
	add = (double) 1 / factorial(next);

	//prompt user to enter double num
	printf("Enter number: ");
	scanf(" %lf", &limit);

	if (limit <= 0){//base case
        	printf("Please enter a positive limit.\n");
        	return 1;
    	}	

	while (add >= limit)
	{
		sum += add;
		next ++;
		add = (double) 1 / factorial(next);
	}

	//print result
	printf("e = 1");
	for (int i = 1; i < next; i ++)
		printf(" + (1 / %d!)", i);
	printf(" = %.10lf\n", sum);

	return 0;
}
