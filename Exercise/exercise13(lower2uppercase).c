#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char smallLetter;
	int letterGap;
	
	printf("Enter a Lowercase letter: ");
	scanf("%c", &smallLetter);

	letterGap = -32;

	printf("The corresponding Uppercase: %c", smallLetter + letterGap);

	return 0;
}
