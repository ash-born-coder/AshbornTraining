/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program checks is the string is a Palindrome(a string which is equal to the inverse of teh string)
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdbool.h>		  
#include<string.h>

bool isPalindrome(char string[]);

int main() {

	char string1[] = "not a palindrome";
	char string2[] = "abccba";
	char string3[] = "abcdcba";

	if (isPalindrome(string1))
	{
		printf("%s \n - is a palindrome", string1);
	}
	else
	{
		printf("%s \n - is not a palindrome", string1);
	}
	
	printf("\n");
	
	if (isPalindrome(string2))
	{
		printf("%s \n - is a palindrome", string2);
	}
	else
	{
		printf("%s \n - is not a palindrome", string2);
	}

	printf("\n");
	
	if (isPalindrome(string3))
	{
		printf("%s \n - is a palindrome", string3);
	}
	else
	{
		printf("%s \n - is not a palindrome", string3);
	}
	return 0;
}

bool isPalindrome(char string[])
{
	int count = 0;

	while (string[count] != '\0')
	{
		count++;
	}

	int middle = count / 2;

	for (int i = 0; i < middle; i++) {
		if (string[i] != string[count - i - 1])		// Corrected if condition 
		{  
			return false;
		}
	}
	return true;
}
