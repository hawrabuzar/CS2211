#include <stdio.h>
#include <stdlib.h>

// Reads the operator
char get_op(void) {
	char op;
	do{
		op = getchar();

	}while(op == ' '); // doesn't account for spaces

	if(op == '*' || op == '/' || op == '\n') {
		return op;
	} 

	else{
		printf("Error: Invalid operator '%c'.\n", op);
		exit(EXIT_FAILURE);
	}
}

// Reads the next number
float get_num(void) {
	float num;
	if(scanf(" %f", &num) != 1) {
		printf("Error: Invalid number.\n");
		exit(EXIT_FAILURE);
	}
	return num;
}

// Evaluates the expression using recursion
float sub_sim_exp(float sub_exp) {
	char next_op = get_op(); 

	if(next_op == '\n') {
	
		return sub_exp;
	} 
	
	else if (next_op == '*' || next_op == '/') {
		float next_num = get_num();
		//recursively multiplies next num to current num
		if(next_op == '*') {
			return sub_sim_exp(sub_exp * next_num);
		} 
		
		else { 
			if (next_num == 0) {
				printf("ERROR: Division by zero.\n");
				exit(EXIT_FAILURE);
			}// Recursively divides next num to current num 
			return sub_sim_exp(sub_exp / next_num);
		}
	} else {
		printf("Error: Incorrect operator '%c'.\n", next_op);
		exit(EXIT_FAILURE);
	}
}

// Starts the expression evaluation
float sim_exp(void) {
	float num = get_num();
	return sub_sim_exp(num);
}

// Main function
int main(void) {
	char cont;
//Asks user for expression, returns final answer to 6 decimal places, then asks user if they would like to continue.
	do {
		printf("Enter expression: ");
		float ans = sim_exp();
		printf("Final Answer: %.6f\n", ans);

		printf("Do you want to keep going?(Y/N): ");
		scanf(" %c", &cont);
	}while(cont == 'Y' || cont == 'y');

	printf("Closing program. Goodbye!\n");
	return 0;
}

