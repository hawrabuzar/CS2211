#include <stdio.h>

//initialize 7 segement numbers
const char segements[10][3][3] =
{ { {' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'} },
	{ {' ', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '} },
	{ {' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '} },
	{ {' ', '_', ' '}, {' ', '_', '|'}, {' ', '_', '|'} },
	{ {' ', ' ', ' '}, {'|', '_', '|'}, {' ', ' ', '|'} },
	{ {' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'} },
	{ {' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'} },
	{ {' ', '_', ' '}, {' ', ' ', '|'}, {' ', ' ', '|'} },
	{ {' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'} },
	{ {' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'} } };

//Function checks if number is out of bounds and ends if error occurs
int check_num(int num){
	if(num < 0 || num > 9){
		printf("Error: Enter number from 1-9");
		return 0;
	}
	return 1;
}

//void function prints out the 7 segement number
void print_num(int num){
	for(int row = 0; row <3; row++){
		for(int col = 0; col<3; col++){
			printf("%c", segements[num][row][col]);
		}
		printf("\n");
	}
}


int main(){
	//initialize constants
	int digit;
	char cont;

	do{
		//if any character other than the numbers are entered program will end
		printf("Enter a number (0-9):\n");
		if(scanf(" %d", &digit) !=1) {
			printf("Error: Out of Bounds.\n");
			return 0;
		}

		if(check_num(digit) !=1){
			continue;
		}
		print_num(digit); //prints number
		//asks if user wants to try again and ends program if anything other than Y is entered
		printf("\nDo you want to try again? (Y/N):\n");
		scanf(" %c", &cont);
	}while(cont == 'Y');
//If "N" is inputted then program will close
	if(cont == 'N'){
		printf("Closeing program. Goodbye!\n");
		return 0;
	
	}
	//if anything else is entered then the program will close after printing an error

	else{
		printf("Error: Incorrect input. Closing program. Goodbye\n");
	}

	return 0;
}
