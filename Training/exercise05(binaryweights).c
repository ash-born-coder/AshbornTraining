/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program calculates the weights 2^n of binary digits for n < 8 and prints them to the console.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	int degree = 0;

	//the for loop to iterate the power until 8
	for (int i = 0; i < 8; i++)
	{
		int degree = (int)pow(2, i);
		printf("The value of 2 with the power %d is %d\n", i, degree);
	}

	return 0;
}
