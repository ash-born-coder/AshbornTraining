/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program determines the size of data types char and int in standard bytes
*/
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main() {

	char testChar[2] = { 'a','b'};
	int testInt[2] = { 1,2 };
	int sizeChar = sizeof(testChar[0]);
	int sizeInt = sizeof(testInt[0]);

	printf("Address of char[0]: %p\n", &testChar[0]);
	printf("Address of char[1]: %p\n", &testChar[1]);
	printf("Size of char in memory: % d byte (8 bits each)\n\n", sizeChar);

	printf("Address of int[0]: %p\n", &testInt[0]);
	printf("Address of int[1]: %p\n", &testInt[1]);
	printf("Size of int in memory: % d byte (8 bits each)\n\n", sizeInt);
	
	return 0;
}

