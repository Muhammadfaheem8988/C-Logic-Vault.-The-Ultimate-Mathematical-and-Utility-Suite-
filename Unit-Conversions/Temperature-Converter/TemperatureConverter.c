#include<stdio.h>

using namespace std;

int main()
{
	float temperature_fahrenheit, temperature_celsius;
	
	// Input the temperature in Fahrenheit
	printf("enter the temperatue in farenhieght: ");
	scanf("%f", &temperature_fahrenheit);
	
	// Conversion logic using the standard formula
	temperature_celsius = 5.0 / 9 * (temperature_fahrenheit - 32);
	
	// Displaying the result formatted to two decimal places
	printf("\nthe the temperature in celsius is %.2f", temperature_celsius);
	
	return 0;
}