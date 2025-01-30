#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isLetter(char);

int main() {

	char characterInput;

	printf("Enter any single character you want: ");
	scanf("%c", &characterInput);

	/*This is how you say the below if statement "If the function 'isLetter' returns true when passing the
	'characterInput' then print"The character is a letter".Otherwise "The character is not a letter"."*/

	if (isLetter(characterInput))
	{
		printf("The character is a letter");
	}
	else
	{
		printf("The character is not a letter");
	}

	return 0;
}

int isLetter(char characterInput) {
	
	//In the below if statement we mention that only the characters within the simple and capital alphabet is true

	if ((characterInput >= 'a') && (characterInput <= 'z') || (characterInput >= 'A') && (characterInput <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
