#include <stdio.h>

using namespace std;

int main()
{
	float temperature_fahrenheit, temperature_celsius;
	int choice;

	// Continuous loop for multiple conversions
	while(1)
	{
		// Displaying the choice menu
		printf("\n\n--- Temperature Converter Menu ---");
		printf("\n1. Fahrenheit to Celsius");
		printf("\n2. Celsius to Fahrenheit");
		printf("\n3. Exit Program");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		// Exit condition
		if(choice == 3)
		{
			printf("\nExiting program...");
			break;
		}

		// Logic for Fahrenheit to Celsius
		if (choice == 1)
		{
			printf("Enter the temperature in Fahrenheit: ");
			scanf("%f", &temperature_fahrenheit);
			
			temperature_celsius = 5.0 / 9 * (temperature_fahrenheit - 32);
			printf("\nThe temperature in Celsius is %.2f", temperature_celsius);
		}
		// Logic for Celsius to Fahrenheit
		else if (choice == 2)
		{
			printf("Enter the temperature in Celsius: ");
			scanf("%f", &temperature_celsius);
			
			temperature_fahrenheit = (9.0 / 5 * temperature_celsius) + 32;
			printf("\nThe temperature in Fahrenheit is %.2f", temperature_fahrenheit);
		}
		else
		{
			printf("\nInvalid Choice! Please try again.");
		}
	}

	return 0;
}