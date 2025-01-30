/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program formulate the roots of the function f(x) using the bisection method
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>		  

int main() {

	int *a = (int*)malloc(2 * sizeof(int));		//allocating memory for two integers
	int *b = (int*)calloc(2, sizeof(int));		//allocating memory for two interger and then intializing them to zero
	
	if ((a == NULL) || (b == NULL))
	{
		exit(EXIT_FAILURE);			//if the memory allocation fails
	}

	a[0] = 9;
	printf("a = %d,%d", *a, *(a + 1));
	printf("\nb = %d,%d", *b, *(b + 1));

	free(a);					//freeing the memory manually in a  
	free(b);					//freeing the memory manually in b

	return 0;
}

