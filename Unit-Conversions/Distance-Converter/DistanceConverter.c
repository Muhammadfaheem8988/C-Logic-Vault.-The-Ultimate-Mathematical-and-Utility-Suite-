#include<stdio.h>

using namespace std;

int main()
{
	float distance_km, distance_meters, distance_feet, distance_inches, distance_centimeters;
	
	// Input distance in kilometers
	printf("enter distance between two cities in kilometres = ");
	scanf("%f", &distance_km);
	
	// Conversion logic using sequential multipliers
	distance_meters = distance_km * 1000;
	distance_feet = distance_meters * 3.28;
	distance_inches = distance_feet * 12;
	distance_centimeters = distance_inches * 2.5;
	
	// Displaying all converted values
	printf("\ndistance between two cities in kilometer = %.2f", distance_km);
	printf("\ndistance between two cities in metres = %.2f", distance_meters);
	printf("\ndistance between two cities in feet = %.2f", distance_feet);
	printf("\ndistance between two cities in inches = %.2f", distance_inches);
	printf("\ndistance between two cities in centimeter = %.2f", distance_centimeters);
	
	return 0;
}