#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int decimal_input, temp_input, remainder, octal_output = 0, power_index = 0, place_value;
	
	// Input a decimal number for conversion to octal
	printf("enter a decimal number: ");
	scanf("%ld", &decimal_input);
	
	// Store original value for final display
	temp_input = decimal_input;
	
	// Logic to convert decimal to octal using place values
	while(decimal_input != 0)
	{
		// Calculate the current power of 10 to place the octal digit
		place_value = pow(10, power_index++);
		
		// Get the remainder when dividing by 8 (base-8)
		remainder = decimal_input % 8;
		
		// Build the octal number representation
		octal_output = (place_value * remainder) + octal_output;
		
		// Reduce the decimal number by dividing by 8
		decimal_input = decimal_input / 8;
	}
	
	// Display the final octal result
	printf("\nthe octal of %ld is = %ld\n", temp_input, octal_output);
	
	return(0);
}