#include <stdio.h>

using namespace std;

int main()
{
	float distance_km, distance_meters, distance_feet, distance_inches, distance_centimeters;
	int choice;

	// Displaying the choice menu for starting unit
	printf("--- Distance Converter Menu ---\n");
	printf("1. Enter distance in Kilometers\n");
	printf("2. Enter distance in Meters\n");
	printf("3. Enter distance in Feet\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	// Logic based on user choice
	if (choice == 1)
	{
		printf("Enter distance in Kilometers: ");
		scanf("%f", &distance_km);
		distance_meters = distance_km * 1000;
		distance_feet = distance_meters * 3.28;
	}
	else if (choice == 2)
	{
		printf("Enter distance in Meters: ");
		scanf("%f", &distance_meters);
		distance_km = distance_meters / 1000;
		distance_feet = distance_meters * 3.28;
	}
	else if (choice == 3)
	{
		printf("Enter distance in Feet: ");
		scanf("%f", &distance_feet);
		distance_meters = distance_feet / 3.28;
		distance_km = distance_meters / 1000;
	}
	else
	{
		printf("\nInvalid Choice!");
		return 0;
	}

	// Final common conversions for all paths
	distance_inches = distance_feet * 12;
	distance_centimeters = distance_inches * 2.5;

	// Displaying all converted values
	printf("\nDistance in Kilometers = %.2f", distance_km);
	printf("\nDistance in Meters = %.2f", distance_meters);
	printf("\nDistance in Feet = %.2f", distance_feet);
	printf("\nDistance in Inches = %.2f", distance_inches);
	printf("\nDistance in Centimeters = %.2f", distance_centimeters);

	return 0;
}