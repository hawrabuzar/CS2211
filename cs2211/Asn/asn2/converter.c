#include <stdio.h>

int main()
{
	char choice; //input variable for initial choice of conversion
	char x; //input variable for which way conversion will occur

	do{
		//Prints intro and asf for input based on options given
		printf("1 for conversion between Celsius and Fahrenheit\n2 for conversion between Centimetre and Inch\n3 for conversion between Kilogram and Pound\n4 for conversion between Meter and Feet\n");
		scanf(" %c", &choice);

		// if invalid input entered then while loop willcontinue prompting until correct input entered
		while(choice!= '1' && choice!= '2' && choice!= '3' && choice!= '4' && choice!= 'q' && choice!= 'Q'){

			printf("Invalid\n1 for conversion between Celsius and Fahrenheit\n2 for conversion between Centimetre and Inch\n3 for conversion between Kilogram and Pound\n4 for conversion between Meter and Feet\n");
			scanf(" %c", &choice);
		}

		//quits program
		if(choice == 'q' || choice == 'Q')
		{
			printf("Quitting Program.\n");
			break;
		}

		//Switch statement presents the four possible cases based on user input
		switch (choice)
		{
			//Case one converts celcius and fahrenheit
			case '1':
				printf("C for Celsius to Fahrenheit\nF for Fahrenheit to Celsius: ");
				scanf(" %c", &x);

				//If invalid input entered while loop prints promt again
				while (x != 'C' && x != 'F')
				{
					printf("Invalid choice Enter: \nC: Celsius to Fahrenheit\nF: Fahrenheit to Celsius\n");
					scanf(" %c", &x);
				}

				//based on choice entered user is promted for a number and makes respective conversion and ends program
				if (x == 'C')
				{
					float C;
					printf("Enter number in °C: ");
					scanf(" %f", &C);
					printf("Result: %.2f°C = %.2f°F\n", C, (C * (9.0 / 5.0)) + 32.0);

					break;
				}

				else{
					float F;
					printf("Enter number in °F: ");
					scanf("%f", &F);
					printf("Result: %.2f°F = %.2f°C\n", F, (F - 32) * (5.0/9.0));

					break;
				}

				//Case two converts between centimetre and Inch
			case '2':

				printf("C for conversion from Centimetre to Inch\nI for conversion from Inch to Centimetre: ");
				scanf(" %c", &x);

				//If invalid input entered while loop prints promt again
				while (x != 'C' && x != 'I')
				{
					printf("Invalid choice Enter: \nC for conversion from Centimetre to Inch\nI for conversion from Inch to Centimetre:\n");
					scanf(" %c", &x);
				}

				//based on choice entered user is promted for a number and makes respective conversion and ends program
				if (x == 'C')
				{
					float C;
					printf("Enter number in cm: ");
					scanf("%f", &C);
					printf("Result: %.2fcm = %finches\n", C, C/2.54);

					break;
				}

				else{
					float I;
					printf("Enter number in Inch: ");
					scanf("%f", &I);
					printf("Result: %.2finches = %.2fcm\n", I, I * 2.54);

					break;
				}

				//Case three converts between kilograms and pounds
			case '3':
				printf("K for conversion from Kilogram to Pound\nP for conversion from Pound to Kilogram: ");
				scanf(" %c", &x);

				//If invalid input entered while loop prints promt again
				while (x != 'K' && x != 'P')
				{
					printf("Invalid choice Enter: \nK for conversion from Kilogram to Pound\nP for conversion from Pound to Kilogram\n");
					scanf(" %c", &x);
				}

				//based on choice entered user is promted for a number and makes respective conversion and ends program
				if (x == 'K')
				{
					float K;
					printf("Enter number kg: ");
					scanf("%f", &K);
					printf("Result: %.2fkg = %.2flb\n", K, K * 2.205);

					break;
				}


				else{
					float P;
					printf("Enter number in lb: ");
					scanf("%f", &P);
					printf("Result: %.2flb = %.2fkg\n", P, P/2.205);

					break;

				}

				//Case four converts between meters and feet
			case '4':
				printf("M for conversion from Meter to Feet\nF for conversion from Feet to Meter: ");
				scanf(" %c", &x);

				//If invalid input entered while loop prints promt again
				while (x != 'M' && x != 'F')
				{
					printf("Invalid choice Enter: \nM for conversion from Meter to Feet\nF for conversion from Feet to Meter: \n");
					scanf(" %c", &x);
				}

				//based on choice entered user is promted for a number and makes respective conversion and ends program
				if (x == 'M')
				{
					float M;
					printf("Enter number in m: ");
					scanf("%f", &M);
					printf("Result: %.2fm = %.2fft\n", M, M * 3.281);

					break;
				}

				else{
					float F;
					printf("Enter number in ft: ");
					scanf("%f", &F);
					printf("Result: %.2fft= %.2fm\n", F, F/3.281);

					break;
				}

		}
	}while(choice!='q' && choice!='Q');


	return 0;
}
