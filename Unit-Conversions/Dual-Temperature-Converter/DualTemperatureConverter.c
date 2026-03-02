#include <stdio.h>

using namespace std;

int main()
{
	float temperature_fahrenheit, temperature_celsius;
	int choice;

	// Displaying the choice menu
	printf("--- Temperature Converter ---\n");
	printf("1. Fahrenheit to Celsius\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	// Logic based on user selection
	if (choice == 1)
	{
		printf("enter the temperature in fahrenheit: ");
		scanf("%f", &temperature_fahrenheit);
		
		// Formula: C = 5/9 * (F - 32)
		temperature_celsius = 5.0 / 9 * (temperature_fahrenheit - 32);
		printf("\nthe temperature in celsius is %.2f", temperature_celsius);
	}
	else if (choice == 2)
	{
		printf("enter the temperature in celsius: ");
		scanf("%f", &temperature_celsius);
		
		// Formula: F = (9/5 * C) + 32
		temperature_fahrenheit = (9.0 / 5 * temperature_celsius) + 32;
		printf("\nthe temperature in fahrenheit is %.2f", temperature_fahrenheit);
	}
	else
	{
		printf("\nInvalid Choice!");
	}

	return 0;
}