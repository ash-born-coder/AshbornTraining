#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
  
	float fahrenheit = 0;
	float centigrade = 0;

	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);

	centigrade = (fahrenheit - 32) * 5 / 9;

	printf("The tempreture in Celcius: %.2f", centigrade);




	return 0;
}
