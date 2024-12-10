#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int swap(int, int);

int main(void)
{
	int x = 2;
	int y = 4;

	printf("Before the swap x: %d and y: %d", x, y);
	swap(x, y);
	printf("\nAfter the swap x: %d and y: %d", x, y);

	return 0;
}

int swap(int a, int b) {

	int temp;
	temp = a;
	a = b;
	b = temp;
}
