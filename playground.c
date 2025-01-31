/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program sums up the value of all of the elememts in the array
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>		  
#include<string.h>

int sumArray(int array[], int length);

int main() {

	int myArray[] = { 1,2,3,9,7,4,7,4,5,6,7,8,9 };
	int funcArray[] = { 2,5,7,9,4,7,2,6,4,1 };
	int sum = 0;

	int length1 = sizeof(myArray) / sizeof(myArray[0]);
	int length2 = sizeof(funcArray) / sizeof(funcArray[0]);

	for (int i = 0; i < length1; i++)
	{
		sum = sum + myArray[i];

		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
	printf("The sum of values of myArray: %d", sum);
	printf("\n\n");

	for (int i = 0; i < length2; i++)
	{
		printf("funcArray[%d] = %d\n", i, funcArray[i]);
	}
	int count = sumArray(funcArray, length2);

	printf("The sum of values of funcArray: %d", count);

	return 0;
}

int sumArray(int array[], int length)
{
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum = sum + array[i];				//
	}

	return sum;
}
