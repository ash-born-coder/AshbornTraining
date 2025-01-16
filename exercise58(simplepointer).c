/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program allows the user to get a better understanding pointers through simple task like declaring a pointer
variable and dereferencing it
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	//incrementing the value using the normal method
	int i = 0;
	printf("value: %d", i);
	i++;
	printf("\nvalue: %d", i);

	printf("\n\nPointer access only");

	//incrementing the value using pointers
	int* address = &i;
	printf("\nAccess value: %d", *address);
	printf("\nAdd value 1: %2d", *address + 1);
	i = *address + 1;
	printf("\nIncrement: %4d\n", ++(*address));

	return 0;
}