/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program formulate the roots of the function f(x) using the bisection method
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double functionPass(double);
double bisectionPass(double, double);

int main() {

	double varXl = 0;
	double varXr = 4;
	double varXm = 0;
	

	bisectionPass(varXl, varXr);
	
	return 0;
}

double functionPass(double x) {

	double function = pow(x, 2) - (2 * x) - 1;

	return function;
}

double bisectionPass(double Xl, double Xr)
{
	double fXl = functionPass(Xl);
	double fXr = functionPass(Xr);
	double tolerance = 1e-6;
	double Xm = 0.0;

	if (fXl * fXr < 0)
	{
		printf("There exist a zero-crossing");

		while ((Xr - Xl) > tolerance)
		{
			Xm = (Xr + Xl) / 2;
			double fXm = functionPass(Xm);

			printf("\nInterval: [%lf, %lf], Midpoint: %lf, f(Xm): %lf\n", Xl, Xr, Xm, fXm);

			if (fXl * fXm < 0)
			{
				Xr = Xm;
			}
			else
			{
				Xl = Xm;
			}
		}
		printf("\nApproximation of zero-crossing: x = %.6lf", Xm);
		printf("\nThe function value at x: f(x) = %.6lf is ", functionPass(Xm));
	
	}
	else
	{
		printf("There exist no zero-crossing");
	}
	return Xm;
}
