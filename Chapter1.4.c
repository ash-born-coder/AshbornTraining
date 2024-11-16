#include<stdio.h>

int main() {

	int R_1;
	int R_2;
	int totalResistance;

	R_1 = 150;
	R_2 = 220;

	totalResistance = R_1 + R_2;

	printf("The total Series resistance is (R1 + R2): %d", totalResistance);

	return 0;
}