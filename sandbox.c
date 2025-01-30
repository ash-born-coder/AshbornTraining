/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program performs a simple string concatenation 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>	

char* invertString(const char*);
int countChar(const char*, char);

int main() {

	const char *original = "Welcome to IE-SO1!";
	char *inverted = invertString(original);
	char character = 'e';

	printf("Original : %s\n", original);
	printf("Inverted : %s\n", inverted);
	printf("Count \'e\': %d", countChar(original, character));

	free(inverted);

	return 0;
}

char* invertString(const char* original)
{
	int length = 0;

	while (original[length] != '\0')				//calculates the length of the string
	{
		length++;
	}

	char* inverse = (char*)malloc((length + 1) * sizeof(char));			//allocatiing memory for the inverse

	if (inverse != NULL)
	{
		for (int i = 0; i < length; i++)								//assigning the inverse of the original 
		{
			inverse[i] = original[length - i - 1];
		}
		inverse[length] = '\0';
	}
	return inverse;
}
	
int countChar(const char* original, char character)
{
	int length = 0;
	int count = 0;

	while (original[length] != '\0')
	{
		length++;
	}

	for (int i = 0; i < length; i++)						
	{
		if (original[i] == character)									//formulating the nuber of character occurences 	
		{
			count++;
		}
	}

	return count;
}
