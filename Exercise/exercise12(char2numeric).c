#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	char characterInput;

	printf("Enter a character: ");
	scanf("%c", &characterInput);

	printf("\nThe corresponding numeric code: %d\n", characterInput);

	return 0;
}
