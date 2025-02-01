/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program creates a dice roll simulator
*/
// - are the comments
/*are the modification done to the algorithm*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>		//this is where rand is
#include<time.h>		//to check the time

int main(void) {

	//seed random
	srand(time(NULL));

	int dice = 5;
	int roll = 0;

	for (int i = 1; i <= dice; i++)
	{
		roll = (rand() % 6) + 1;
		printf("Roll{%d} : %d\n", i, roll);
	}

	return 0;
}

