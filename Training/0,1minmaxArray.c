/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - Finding the minimum and the maximun number in an array 
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>

int findMax(int myArray[], int lenght);

int main() {

	int myArray[] = { 5,9,10,11,4,3,8,6,7 };

	//the trick is to keep in track of the minumum number found so far
	int min;

	//making the assumption thath the first element in the array is the minimum number
	min = myArray[0];

	//calculating the size of the array 
	int length = sizeof(myArray) / sizeof(myArray[0]);

	/*down below the i starts from the index 1 because the index 0 already assigned to min so making it 1 or 0 wouldnt make any difference*/
	for (int i = 1; i < length; i++)
	{
		if (myArray[i] < min)
		{
			min = myArray[i];
			/*printf can be used to chewck the performance of the algorithm*/
			printf("New min found: %d\n", min);
		}
	}

	printf("The minimum number is %d\n\n", min);
	
	//passing the array and the size of the array to the function
	printf("The maximum number is %d", findMax(myArray, length));

	return 0;
}

int findMax(int myArray[], int length)
{
	int max;

	max = myArray[0];

	for (int i = 1; i < length; i++)
	{
		if (myArray[i] > max)
		{
			max = myArray[i];
			printf("New max found: %d\n", max);
		}
	}
	return max;
}
