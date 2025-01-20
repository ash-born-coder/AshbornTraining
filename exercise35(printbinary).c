/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program promts the user to enter an unsigned value and in return prints the corresponding binary value
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void printBinary(unsigned int decimalValue);

int main() {

	unsigned int decimalValue = 0;

	printf("Please enter a non-negative integer: ");
	scanf("%u", &decimalValue);     //%u format specifier is used in C when working with unsigned integers

	printBinary(decimalValue);

	return 0;
}

void printBinary(unsigned int decimalValue) {

	int length[16] = {0};	//array to store the binary digits

	for (int i = 15; i >= 0; i--)	//using the for loop to assign the values obtained by the division meth0d
	{
		length[i] = decimalValue % 2;
		decimalValue /= 2;		//divide the variable decimalValue and then update the value by the value recieved by dividing
	}

	printf("The corresponding binary patttern: ");

	for (int i = 0; i < 16; i++)	//printing the result
	{
		printf("%d", length[i]);
	}
}