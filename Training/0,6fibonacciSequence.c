/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program computes the Fibonacci sequence
*/
// - are the comments
/*are the modification done to the algorithm*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int fib(int n);

int main(void) {
	
	int term1 = 0;
	int term2 = 1;
	int fibn = 0;
	int length = 0;

	do
	{
		printf("Enter the sequence length\n");
		scanf("%d", &length);

		if (length < 3)
		{
			printf("Length must be >= 3\n");
		}
	} while (length < 3);

	printf("\nIterative solution\n ");
	printf("%d, %d", term1, term2);

	for (int i = 2; i < length; i++)
	{
		fibn = term1 + term2;
		printf(", %d", fibn);

		term1 = term2;
		term2 = fibn;

	}

	printf("\nRecursive solution\n ");
	for (int i = 0; i < length; i++)
	{
		printf(" %d", fib(i));

		if (i != (length - 1))
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}
//this is the recursive function which demonstarates how a function calls it self until the end conditions are met
int fib(int n)
{
		if (n == 0) {		//this condition returns 0 if the argument passed is zero 
			return 0;
		}
		else if (n == 1) {	//this condition returns 1 if the argument passed is one
			return 1;
		}
		else {
//this is where the magic happens, when the passed argument is greater than 1 the function calls it self but this time the returned value is the sum of the passed argument miuns 2 and passed argument minus 1			
			return fib(n - 2) + fib(n - 1);	
		}
}
