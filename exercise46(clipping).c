/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program replaces the negative values in a 2D array with zero and replaces any value that is above 255 with 255.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 4

int main() {

	int array[SIZE][SIZE] = { {-4,-3,-2,-1},{0,1,2,3},{252,253,254,255},{256,257,258,259} }; //initializing the 2D array

	printf("Source data:\n");

	for (int i = 0; i < SIZE; i++)		//printing the 2D array before clipping
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%4d", array[i][j]);
			
		}
		printf("\n");
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (array[i][j] < 0)		//replacing any number lesser than 0 to 0
			{
				array[i][j] = 0;
			}
			if (array[i][j] > 255)		//replacing any number greater that 255 to 255
			{
				array[i][j] = 255;
			}
		}
	}

	printf("\nClipped to [0, 255]\n");		//printing the clipped value

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
