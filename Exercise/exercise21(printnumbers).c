#include<stdio.h>

int main() {

	int i = 1;
	int j = 0;
	int k = 1;

	while (i <= 20)
	{
		printf(" %d ", i);
		i++;
	}

	printf("\n");

	while (j < 10)
	{
		printf(" %d ", 2*j+1);
		j++;
	}

	printf("\n");

	while (k <= 10)
	{
		printf(" %d ", 2 * k);
		k++;
	}

	return 0;
}
