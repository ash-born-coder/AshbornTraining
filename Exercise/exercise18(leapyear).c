/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program allows the user to enter a year and check whether it is a leap year
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	int yearInput = 0;

	printf("Enter the year : ");
	scanf("%d", &yearInput);

	//checking is there is a remainder by dividing the yearInput by 4, 100 and 400
	int divideByFour = yearInput % 4;
	int divideByHund = yearInput % 100;
	int divideByFhun = yearInput % 400;

	//the if statement is used to check whether the yearInput is dividible by 4, 100 and 400 at once 
	if (divideByFour == 0)
	{
		printf("\nThe year %d is a leap year", yearInput);
	}
	else if (divideByHund == 0)
	{
		printf("\nThe year %d is not a leap year", yearInput);
	}
	else if (divideByFhun == 0)
	{
		printf("\nThe year %d is a leap year", yearInput);
	}
	else
	{
		printf("The year %d is not a leap year", yearInput);
	}



	return 0;
}
