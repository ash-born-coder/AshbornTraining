/*
Name - Chanuka Ashan Gunawardena
Module - Software Construction 1 (C programming)

Description - This program is a continuation on Exercise 10. The main focus is to write a function that return the approximated 
values according to the equation in the previous exercise
*/
#include<stdio.h>
#include<math.h>

double leibnizSeries(int N);

int main() {

	printf("The approximation of the for the resulting values N = {0,50,100,150,......,1000}\n");
	for (int N = 0; N <= 1000; N += 50)		//this for loop is for accessing the values mention in the question with 50 increment
	{
		double piApproximarion = leibnizSeries(N);
		printf("\nThe approximation for N = %d is: %lf", N, piApproximarion);
	}
	return 0;
}

double leibnizSeries(int N) {	//function computes the Leibniz series

	double sum = 0;		//initialize the sum of the series
	
	for (int i = 0; i <= N; i++)
	{
		double clear = pow(-1, i) / ((2 * i) + 1);
		sum = sum + clear;
	}
	return 4 * sum;
}
