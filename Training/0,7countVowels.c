/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program counts the number of vowels in a string
*/
// - are the comments
/*are the modification done to the algorithm*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

int vowelCount(char s[]);

int main(void) {

	char s1[] = "It's a wonderful life";
	char s2[] = "Luke I am your father";
	
	int count1 = vowelCount(s1);
	int count2 = vowelCount(s2);


	printf("%s\n", s1);
	printf("Has a vowel count of :%d\n",count1);
	printf("%s\n", s2);
	printf("Has a vowel count of :%d\n", count2);

	return 0;
}

int vowelCount(char s[])
{
	int number = 0;

	for (int i = 0; i < strlen(s); i++)
	{
		//in this switch statement fall through logic is used where there is no break between the cases and it checks the vowels from A - U
		switch (toupper(s[i]))
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		number++;
		}
	}
	return number;
}
