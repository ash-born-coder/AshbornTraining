/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - Counting the occurence of a value in an array
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>

int occurences(int funcArray[], int toCheck, int length2);

int main() {

	int myArray[] = { 4,9,7,6,5,8,3,2,1,5,3,4,5,7,8 };
	int funcArray[] = { 3,4,6,7,9,5,3,7,0,9,4,8,6,3 };

	//the count variable is going to keep track of the count
	int count = 0;
	//the value we need to keep in track of
	int toFind = 5;
	int toCheck = 3;
	
	//the size of the array
	int length1 = sizeof(myArray) / sizeof(myArray[0]);
	int length2 = sizeof(funcArray) / sizeof(funcArray[0]);


	for (int i = 0; i < length1; i++)
	{
		/*to check what aray elemnt we are refering to and the corresponding value*/
		printf("myArray[%d] = %d\n", i, myArray[i]);
		if (myArray[i] == toFind)
		{
			count++;
			/*to show that a value with reference was found*/
			printf("Found %d and incremented count to %d\n", toFind, count);
		}
	}
	printf("\n");

	int accumulated = occurences(funcArray, toCheck, length2);

	printf("\nThe number of %ds in the first array: %d\n", toFind, count);
	printf("\nThe number of %ds in the second array: %d\n", toCheck, accumulated);

	return 0;
}

int occurences(int funcArray[], int toCheck, int length2)
{
	int accumulated = 0;

	for (int i = 0; i < length2; i++)
	{
		printf("funcArray[%d] = %d\n", i, funcArray[i]);
		if (funcArray[i] == toCheck)
		{
			accumulated++;
			printf("Found %d and incremented count to %d\n", toCheck, accumulated);
		}
	}

	return accumulated;
}

