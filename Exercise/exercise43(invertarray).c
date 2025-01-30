/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program inverts the order of elements in an array inline(without using a second array for intermediate result)
*/
#include<stdio.h>
#include<math.h>
#define SIZE 7

int main(void) {

	int originalArray[SIZE] = { 1,2,5,9,11,20,26 };

	printf("The original array:");

	for (int i = 0; i < SIZE; i++)
	{
		printf(" %2d", originalArray[i]);
	}

	printf("\nThe inverted array:");

	for (int i = (SIZE - 1); i >= 0; i--)
	{
		printf(" %2d", originalArray[i]);
	}

	

	/*for (int i = 0; i < SIZE; i++)
	{
		printf(" %d,", invertedArray[i]);
	}*/

	
	return 0;
}

