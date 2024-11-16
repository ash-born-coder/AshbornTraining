#include<stdio.h>

int main() {

	float R1;
	float R2;
	float Rsum;
	float Rproduct;
	float totalResistance;

	R1 = 150;
	R2 = 220;

	Rsum = R1 + R2;
	Rproduct = R1 * R2;

	totalResistance = Rproduct / Rsum;

	printf("The total parallel resistance (1/R = 1/R1 + 1/R2): %.2f", totalResistance);




	return 0;
}