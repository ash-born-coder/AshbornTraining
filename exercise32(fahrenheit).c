#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double fahrenheit2Centigrade(double);
double centigrade2Fahrenheit(double);

int main() {

	double fahrenheitInput;
	double centigradeOutput;
	double fahrenheitOutput;
	double centigradeInput;

	printf("Please enter the relevant temperature in Fahrenheit: ");
	scanf("%lf", &fahrenheitInput);

	centigradeOutput = fahrenheit2Centigrade(fahrenheitInput);

	printf("Please enter the relevant temperature in Celcius: ");
	scanf("%lf", &centigradeInput);

	fahrenheitOutput = centigrade2Fahrenheit(centigradeInput);

	printf("The equivalent temperature in Centigrade is: %.2f\n", centigradeOutput);
	printf("The equivalent temperature in Fahrenheit is: %.2f\n", fahrenheitOutput);

	return 0;
}

double fahrenheit2Centigrade(double fahrenheitInput) {
	return (fahrenheitInput - 32) * (5.0 / 9.0);
	
}

double centigrade2Fahrenheit(double centigradeInput) {

	return (centigradeInput * 1.80) + 32.0;
}