#include<stdio.h>

int main() {

	double maximumTemperature[12] = { 2.7,3.8,7.2,11.9,17.0,20.2,21.4,21.6,18.0,13.3,7.6,4.0 };
	double minimumTemperature[12] = { -2.2,-1.8,0.4,3.0,7.2,10.4,12.2,11.9,9.4,6.3,2.5,-0.7 };
	double maxSum = 0.0;
	double minSum = 0.0;
	double maxDifference = 0.0;

	for (int i = 0; i < 12; i++)
	{
		maximumTemperature[i];
		minimumTemperature[i];

		maxSum = maxSum + maximumTemperature[i];
		minSum = minSum + minimumTemperature[i];
	
	if (maximumTemperature[i] - minimumTemperature[i] > maxDifference)
	{
		maxDifference = maximumTemperature[i] - minimumTemperature[i];
	}
	}
	printf("The average Maximum temperature: %.2lf", maxSum / 12.0);
	printf("\nThe average Minimum temperature: %.2lf", minSum / 12.0);
	printf("\nThe maximum differnece in temperature: %.2lf deg C", maxDifference);


	return 0;
}
