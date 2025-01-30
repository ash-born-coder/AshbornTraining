/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program creates and prints two int arrays with 100 elements with value 0.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	int testArray[100];
	int testArray1[100] = { 0 };

	for (int i = 0; i < 100; i++)	 //for loop for assigning the value 0 in the array (testArray)
	{
		testArray[i] = 0;
	}

	for (int i = 0; i < 100; i++)	//for loop to print the array
	{
		printf("The value for index %d is: %d\n", i, testArray[i]);
	}

	printf("Array 2: {");

	for (int i = 0; i < 100; i++)	 //for loop for assigning the value 0 in the array (testArray)
	{
		printf("%d,", testArray1[i]);
	}

	printf(" }");
	
	return 0;
}

