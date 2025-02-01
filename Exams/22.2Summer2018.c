/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

22.2.1 - 1. Implement the function eulerSeries() using the provided prototype. The function returns the
            approximation of Euler’s number using above formula. The function parameter corresponds
            to n in above formula

22.2.2 - 2. Users are asked to enter the parameter n to use for the approximation.
         3. Use the scanf() function to read input from the keyboard.
         4. While the user input is not valid, users are asked to retry.
         5. The keyboard line buffer is emptied after each user input.
         6. The program prints the approximated numbers for n in 0 to the value entered by the user.
            The output must be formatted exactly as the output in the section below (look at the console).
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>	

double eulerSeries(int size);

int main() {

	int input = 0;

	printf("Maximum n to use: ");
	while (scanf("%d", &input) != 1 || input < 0)
	{
		printf("Input must be a non-negative integer. Retry: ");
		while (getchar() != '\n');
	}

	printf("Approx. of Euler's number:\n");
	
	for (int i = 0; i <= input; i++)
	{
		printf("n = %d: %lf\n", i, eulerSeries(i));
	}

	return 0;
}

double eulerSeries(int size)
{
	double euler = 0.0;
	double factorial = 1.0;

	for (int i = 0; i <= size; i++)
	{
		//to make sure 0/0 does not happen
		//when i = 0 <- doesn't go inside the if statement
		//when i = 1
		//when i = 2
		if (i > 0)
		{
		    //factorial = 1 * 1 -> 1
			//factorial = 1 * 2 -> 2
			factorial = factorial * i;

		}
		//euler = 0 + ( 1 / 1 ) -> 1
		//euler = 1 + ( 1 / 1 ) -> 2
		//euler = 2 + ( 1 / 2 ) -> 2.5
		euler = euler + (1.0 / factorial);
	}

	return euler;
}
