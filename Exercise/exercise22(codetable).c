#include<stdio.h>

int main() {

	printf("+------+-----------+------+-----------+");
	printf("\n| code | lowercase | code | uppercase |\n");
	printf("+------+-----------+------+-----------+\n");

	int code = 1;
	int upperCode = 27;
	char upperCase = 'A';

	for (char lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		printf("|  %2d  |     %c     |  %d  |     %c     |\n", code, lowercase, upperCode, upperCase);
		code++; 
		upperCode++;
		upperCase++;
	}

	printf("+------+-----------+------+-----------+");






	return 0;
}
