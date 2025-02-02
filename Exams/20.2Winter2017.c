/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

20.2.1 - Implement functionality for mathematical complex numbers z = x + jy with real part x and
         imaginary part y. Your implementation must fulfill all requirements stated in the following.
			1. Define a data type complex, which is a structure of two double variables named real and
			imag.
			2. Implement the function absolute() that returns the absolute value |z| = root( x^2 + y^2)	of a complex number z.		
			3. Implement the function add() that returns the sum a + b of two complex numbers a and b.
			4. Implement the function multiply() that returns the product a · b of two complex numbers a
			and b.
			5. Add all required include directives.
			6. The main() function must generate console output exactly as stated below.
*/
// - are the comments
/*are the modification done to the algorithm*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>		  
#include<time.h>	

typedef struct
{
	double real;
	double imag;
}complex;

/* Function prototypes (provided by examiner) */
double absolute(complex z);
complex add(complex a, complex b);
complex multiply(complex a, complex b);

/* Main function (provided by examiner) */
int main(void)
{
	complex z1 = { 3., 4. };
	complex z2 = { 2.0, -1. };
	complex sum, product;

	/* Print complex numbers to the console */
	printf("Input data:\n");
	printf("z1 = %.1f %+.1fj\n", z1.real, z1.imag);
	printf("z2 = %.1f %+.1fj\n", z2.real, z2.imag);

	/* Absolute values */
	printf("\nAbsolute values:\n");
	printf("|z1| = %.3f\n", absolute(z1));
	printf("|z2| = %.3f\n", absolute(z2));

	/* Mathematical operations */
	printf("\nMathematical operations:\n");
	sum = add(z1, z2);
	product = multiply(z1, z2);
	printf("z1 + z2 = %.1f %+.1fj\n", sum.real, sum.imag);
	printf("z1 * z2 = %.1f %+.1fj\n", product.real, product.imag);

	getchar();
	return 0;
}

double absolute(complex z)
{
	return sqrt(z.real * z.real + z.imag * z.imag);
}

complex add(complex a, complex b)
{
	complex result;
	
	result.real = (a.real + b.real);
	result.imag = (a.real + b.imag);

	return result;
}

complex multiply(complex a, complex b)
{
	complex result;

	result.real = ((a.real * b.real) + (-1 * (a.imag * b.imag)));
	result.imag = ((a.real * b.imag) + (a.imag * b.real));

	return result;
}

