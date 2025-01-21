/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program copy the value of one array to another array 
*/
#include<stdio.h>
#include<math.h>
#define SIZE 6

int main() {

	int sourceArray[SIZE] = { 1,2,5,9,11,20 };			//the source array
	int copyArray[SIZE];						//the copy array

	for (int i = 0; i < SIZE; i++)					//copying what ever is in the source array to copy array
	{
		copyArray[i] = sourceArray[i];
	}

	for (int i = 0; i < SIZE; i++)					//printing the copied result
	{
		printf("The element of the copyArray at index %d is: %d\n", i, copyArray[i]);
	}
	
	return 0;
}

