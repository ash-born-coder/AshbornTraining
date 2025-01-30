/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program prints the transposed matrix of the corresponding matrix (the matrix must be passed to the function as 
a 1D array)
*/
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main() {

	double term = 0.0;			//initializing the variables
	double sum = 0.0;
	double deltaP = 1e-10;
	int k = 0;

	do
	{
		term = pow(2, -k);		//calculating the current term
		sum = sum + term;
		k++;

	} while (term >= deltaP);	//stop when the term is similar to delta

	printf(" The Approximation 0f the series: %.10lf", sum);
	printf("\n The number terms required: %d", k);
	
	return 0;
}

