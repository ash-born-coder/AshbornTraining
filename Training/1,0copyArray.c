/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program shows how to copy an array
*/
// - are the comments
/*are the modification done to the algorithm*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>		
#include<time.h>

int *copyArray(int *array, int length);

int main(void) {

	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int b[] = { 11,22,33,44,55,66,77,88,99 };

	int lengthA = sizeof(a) / sizeof(a[0]);
	int lengthB = sizeof(b) / sizeof(b[0]);

	printf("These are the original arrays\n\n");
	printf(" array A :");

	for (int i = 0; i < lengthA; i++)
	{
		printf("%d", a[i]);
		
		if (i != (lengthA - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

	}

	printf(" array B :");

	for (int i = 0; i < lengthB; i++)
	{
		printf("%d", b[i]);

		if (i != (lengthB - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

	}

	int *copyA = copyArray(a, lengthA);
	int *copyB = copyArray(b, lengthB);

	printf("\nThese are the copy arrays\n");

	for (int i = 0; i < lengthA; i++)
	{
		printf("copyA[%d] : %d\n", i, copyA[i]);
	}

	printf("\n");

	for (int i = 0; i < lengthA; i++)
	{
		printf("copyB[%d] : %d\n", i, copyB[i]);
	}

	free(copyA);
	free(copyB);

	return 0;
}

int *copyArray(int* array, int length)
{
	int *c = (int*)malloc(length * sizeof(int));

	for (int i = 0; i < length; i++)
	{
		c[i] = array[i];
	}

	return c;
}
