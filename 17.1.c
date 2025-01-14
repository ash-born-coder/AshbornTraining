/*
Name: Chanuka Ashan Gunawardena
Subject: Software Construction 01
Lab: Pointers & Arrays(Lab 4)
Date: 13.12.2024

Description:- To build up code which can determine the distance between any number of waypoints entered(coordinates should be entered as well). Since the number of ways points 
the user will enter is ambiguous we have to manipulate the memory according to the users input.
*/

#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#define RADIUS 6378.388          //Declaring the Earth's radius as a macro
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double distanceKm(double latitude1, double laitiude2, double longitude1, double longitude2);

int main() {

	int waypoints = 0;
	double totalDistance = 0;
	double* latitudes = NULL;
	double* longitudes = NULL;

	//this prompts the user to enter a value that is acceptable and will repeat itself until an accepteable input is recieved
	printf("Enter the number of waypoints: ");

	while (scanf("%d", &waypoints) != 1 || waypoints < 2)
	{
		printf("Try again (expected number >= 0): 3\n");
		while (getchar() != '\n');
	}

	printf("\n\nEnter the waypoints as <latitude> <longitude>\n");

	//allocating memory to store the latitudes and longitudes according to the number of waypoints the user is neeeded 
	latitudes = (double*)malloc(waypoints * sizeof(double));
	longitudes = (double*)malloc(waypoints * sizeof(double));

	if ((latitudes == NULL) || (longitudes == NULL)) 
		exit(EXIT_FAILURE);
	

	for (int i = 0; i < waypoints; i++)
	{
		printf("Waypoint %d: ", i + 1);
		while (scanf("%lf %lf", &latitudes[i], &longitudes[i]) != 2)
		{
			printf("Invaild input (expected \"<latitudes> <longitudes>\"):");
			while (getchar() != '\n');
		} 
	}

	for (int i = 0; i < waypoints - 1; i++)
	{
		double distance = distanceKm(latitudes[i], latitudes[i + 1], longitudes[i], longitudes[i + 1]);

		totalDistance = totalDistance + distance;
	}

	printf("By taking this route you will travel a distance of: %.2lf km", totalDistance);
	

	free(latitudes);
	free(longitudes);

	return 0;
}

double distanceKm(double lat1, double lat2, double lon1, double lon2)
{
	lat1 = lat1 * M_PI / 180;
	lat2 = lat2 * M_PI / 180;
	lon1 = lon1 * M_PI / 180;
	lon2 = lon2 * M_PI / 180;

	return RADIUS * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));
}
