#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int temp_input, remainder, decimal_input, binary_output = 0, power_index = 0, place_value;
	
	// Input a decimal number for conversion
	printf("enter a decimal number: ");
	scanf("%ld", &decimal_input);
	
	// Store original value for final display
	temp_input = decimal_input;
	
	// Logic to convert decimal to binary using place values
	while(decimal_input != 0)
	{
		// Calculate the current power of 10 to place the binary digit
		place_value = pow(10, power_index++);
		
		// Get the remainder (0 or 1) when dividing by 2
		remainder = decimal_input % 2;
		
		// Build the binary number representation
		binary_output = (place_value * remainder) + binary_output;
		
		// Reduce the decimal number
		decimal_input = decimal_input / 2;
	}
	
	// Display the final binary result
	printf("\nthe binary of %ld is = %ld\n", temp_input, binary_output);
	
	return(0);
}