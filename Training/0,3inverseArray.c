/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program reverse the elements in an array
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>

void reverse(int array[], int length);

int main() {

	int myArray1[] = { 1,2,3,4,5,6,7,8,9 };
	int myArray2[] = {6,5,4,3,2,1,0};
	int length1 = sizeof(myArray1) / sizeof(myArray1[0]);
	int length2 = sizeof(myArray2) / sizeof(myArray2[0]);
	int temp = 0;

	reverse(myArray1, length1);
	reverse(myArray2, length2);

	for (int j = 0; j < length1; j++)
	{
		printf("myArray[%d] = %d\n", j, myArray1[j]);
	}
	printf("\n");

	for (int i = 0; i < length2; i++)
	{
		printf("myArray2[%d] = %d\n", i, myArray2[i]);
	}
	return 0;
}

void reverse(int array[], int length)
{
	int temp = 0; 

						//here the length / 2 is because in this format you loop through only a halfway to the array
	for (int i = 0; i < (length / 2); i++)
	{
		//here the trick is to assign the the values in a tempory variable to swap
		temp = array[i];
		array[i] = array[length - i - 1];
		array[length - i - 1] = temp;
	}
}
