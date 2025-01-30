/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program transforms Cartesian coordinates to polar coordinates using pointers
*/
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void Cartesian2Polar(double xInput, double yInput, double* radius, double* phi);  //void function is used because we are returning 2 values

int main() {

	double xValue = 0.0;
	double yValue = 0.0;
	double radius = 0.0;
	double phi = 0.0;

	printf("This program transforms Cartesian coordinates to Polar coordinates\n");
	printf("\n\nPlease enter the cartesian coordinates: ");
	
	while (scanf("%lf %lf", &xValue, &yValue) != 2) 
	{
		printf("The number of values entered wrong. Retry");
	}

	Cartesian2Polar(xValue, yValue, &radius, &phi);		//passing the radius and phi as arguments with their memory address

	printf("\nThe polar coordinates are radius: %.2lf and phi: %.2lf\n", radius, phi / M_PI);

	return 0;
}

void Cartesian2Polar(double xInput, double yInput, double* radius, double* phi) {
 
	*radius = sqrt((xInput * xInput) + (yInput * yInput));   //updating the value stored in radius(which is initialized to zero) at the memory location pointed by radius 
	*phi = atan2(yInput, xInput);							 //updating the value stored in phi(which is initialized to zero) at the memory location pointed by phi 

}
