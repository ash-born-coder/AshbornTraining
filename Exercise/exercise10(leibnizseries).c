/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program calculates the all approximations frm N = 0 to N = 6 in a series which is used to calculate the pi
when N -> infinity
*/
#include<stdio.h>
#include<math.h>

int main() {

	double check = 0;
	double sum = 0;		//variable to store the sum of the series

	printf("Print the approximation of the series from N = 0 to N = 6\n");

	for (int i = 0; i <= 6; i++)	//loop from N = 0 to N = 6
	{
		check = pow(-1, i) / ((2 * i) + 1);
		sum = sum + check;
		printf("\nThe approximation for N = %d: %lf", i, 4 * sum);
	}

	

	return 0;
}
