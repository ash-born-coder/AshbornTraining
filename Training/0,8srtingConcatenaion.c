/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program concatenate strings(as in join two strings)
*/
// - are the comments
/*are the modification done to the algorithm*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

char *stringAppend(char* s1, char* s2);

int main(void) {

	char first[20] = "First";
	char second[10] = "Second";

	strcat(first, second);
	printf("first: %s\n", first);

	char s1[] = "Autobots!";
	char s2[] = "Roll out";

	char* s = stringAppend(s1, s2);
	printf("s: %s\n", s);
	free(s);  // Free dynamically allocated memory
	

	return 0;
}

char *stringAppend(char* s1, char* s2)
{
	int s1_length = 0;
	int s2_length = 0;
	//calculating the length of the first array
	while (s1[s1_length])
	{
		s1_length++;
	}
	//calculating the length of the second array
	while (s1[s2_length])
	{
		s2_length++;
	}
	//formulating the length of the concatenated string by the addition of the lengths of the first two arrays
	int size = s1_length + s2_length + 1;

	//allocating memory for the new string 
	char *s = (char*)calloc(size, sizeof(char));

	for (int i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}

	for (int i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}

	s[size - 1] = '\0';

	return s;
}
