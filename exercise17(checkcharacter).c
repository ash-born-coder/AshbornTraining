/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program reads a single character from the keyboard and print to the console, whether the character entered is
a digit, small latter, capital letter, or neither a digit nor a letter.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	char chInput = 0;

	printf("Enter a single character: ");
	if (scanf("%c", &chInput) != 1)           //to check whether a single value is entered
	{
		printf("\nError reading input\n");
		return 1;
	}

	//this if ´statements check hether the entered character is a digit, small latter, capital letter, or neither a digit nor a letter.
	if ('0' <= chInput && chInput <= '9')
	{
		printf("\nThe entered character is the digit");
	}
	else if ('a' <= chInput && chInput <= 'z')
	{
		printf("\nThe entered character is a simple character");
	}
	else if ('A' <= chInput && chInput <= 'Z')
	{
		printf("\nThe entered character is a capital letter");
	}
	else
	{
		printf("The entered character is neither a digit nor a letter");
	}

	return 0;
}