/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program formulate the roots of the function f(x) using the bisection method
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double functionPass(double);

int main() {

	double varXl = 0;
	double varXr = 4;
	double varXm = 0;
	double tolerance = 1e-6;

	double fXl = functionPass(varXl);
	double fXr = functionPass(varXr);

	if (fXl * fXr < 0)		//checking if the corresponding y values for the variables input are in the same side or not
	{
		printf("There exist a zero-crossing in the interval %.2lf and %.2lf", varXl, varXr);

		while ((varXr - varXl) > tolerance)
		{
			varXm = (varXl + varXr) / 2;
			double fXm = functionPass(varXm);

			printf("\nInterval: [%lf, %lf], Midpoint: %lf, f(Xm): %lf\n", varXl, varXr, varXm, fXm);

			if (fXl * fXm < 0)					//checking if the variables are on the same or opposite sides
			{
				varXr = varXm;
				fXr = fXm;

			}
			else
			{
				varXl = varXm;
				fXr = fXm;
			}

		}
		varXm = (varXl + varXr) / 2;			//final midpoint
		printf("\nApproximation of zero-crossing: x = %.6lf", varXm);
		printf("\nThe function value at x: f(x) = %.6lf is ", functionPass(varXm));
	}
	else
	{
		printf("There exist NO zero-crossing in the interval  %.2lf and %.2lf\n\n", varXl, varXr);
	}
	return 0;
}

double functionPass(double x) {

	double function = pow(x, 2) - (2 * x) - 1;

	return function;
}
