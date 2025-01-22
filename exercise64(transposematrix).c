/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program prints the transposed matrix of the corresponding matrix (the matrix must be passed to the function as 
a 1D array)
*/
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
#define SIZE 16
#define ROWS 4
#define COLUMNS 4

void transposeNxN(int* matrixA, int size);

int main() {

	int matrixA[SIZE] = { 11,12,13,14,21,22,23,24,31,32,33,34,41,42,43,44 };	//initializing the matrix as a 1D array

	printf("Matrix A:");
	for (int i = 0; i < 16; i++)		//printing the 1D array as a 2D matrix
	{
		if (i % 4 == 0)					//line break after every 4 values entered 
		{
			printf("\n");
		}
			printf(" %2d ", matrixA[i]);
	}

	transposeNxN(matrixA,SIZE);			//calling the function as passing the matrix and the size of the matrix as a argument
	
	return 0;
}

void transposeNxN(int* matrixA, int size)
{

	int matrixAT[ROWS][COLUMNS];		//formulating the passed 1D array into a 2D array

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			matrixAT[i][j] = matrixA[(i * COLUMNS) + j];		//the formular for mapping the elementns
		}
	}

	printf("\n\nMatrix A^T:\n");		//printing the transposed matrix
	for (int a = 0; a < ROWS; a++)
	{
		for (int b = 0; b < COLUMNS; b++)
		{
			printf(" %d ", matrixAT[b][a]);
		}
		printf("\n");
	}
}
