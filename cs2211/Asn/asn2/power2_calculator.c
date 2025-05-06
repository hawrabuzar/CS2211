#include <stdio.h>

//recursive function that takes in assumed positive integer n
long power2(int n){
        //If n is 0 then return 1;
        if (n == 0){
                return 1;
        }

        //Checks if n is even
        if(n % 2 == 0){
                //recursively calculate half of the number
                unsigned long even = power2(n/2);
                //squaresthe half power to get 2^num
                return even * even;
        }

        else{
                //recursively calculate half of the off power
                unsigned long odd = power2((n -1) /2);
                //square half of odd power to itself and multiply by two to get 2^num
                return odd * odd * 2;
        }


}

int main(){

        //integer variable for user input of power
        int num;

        //loops until the exponent entered is 0
        while(1){

                //prompts user to enter number
                printf("Enter a number as the exponent: \n");
                scanf(" %d", &num);

                //if number is 0 then print statement and exit program
                if(num == 0){
                        printf("2^0=1\n");
                        break;
                }

                //recursively calculates power of 2 and prints out result
                unsigned long result = power2(num);
                printf("2^%d = %lu\n", num, result);

        }
}
