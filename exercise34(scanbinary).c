/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program promts the user to enter a binary patternand returns the corresponding integer value. 
In case of an invaid input the function shall return a -1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int scanBinaryInteger(char *binaryPattern);

int main() {

	char binaryPattern[100];	//the bit pattern is stored in a char because it is a sequsence of characters and not a single numeric value 

	printf("Enter the Binary pattern: ");
	while(scanf("%s", binaryPattern) != 1){}

	int result = scanBinaryInteger(binaryPattern);

	if (result == -1)
	{
		printf("Invallid input! Please enter a binary pattern");
	}
	else
	{
		printf("The corresponding decimal: %d", result);
	}
	return 0;
}

int scanBinaryInteger(char *binaryPattern) {

	int length = 0;		//this is to calculate the length of the sequence
	int decimalValue = 0;

	while (binaryPattern[length] != '\0')	//this while loop counts the size of the sequence
	{
		length++;
	}

	for (int i = 0; i < length; i++)	//this for loop checks whether the number sequence entered is binary
	{
		if ((binaryPattern[i]) != '0' && (binaryPattern[i]) != '1')		//since there is only 1s an 0s in binary
		{
			return -1;	//if the entered value is invalid it returns a -1
		}
	}

	for (int i = 0; i < length; i++)	//this for loop converts the binary number to a decimal
	{
		decimalValue = decimalValue * 2 + (binaryPattern[i] - '0');
	}
	return decimalValue;
}
