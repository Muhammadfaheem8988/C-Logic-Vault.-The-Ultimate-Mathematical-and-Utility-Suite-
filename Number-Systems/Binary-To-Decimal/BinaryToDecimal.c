#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int binary_input, temp_input, remainder, decimal_output = 0, power_index = 0, place_value;
	
	// Prompt user for a binary number
	printf("enter a binary number: ");
	scanf("%ld", &binary_input);
	
	// Store the original binary value for final display
	temp_input = binary_input;
	
	// Process the binary number until it reaches 0
	while(binary_input != 0)
	{
		// Calculate the positional weight (2^0, 2^1, 2^2, etc.)
		place_value = pow(2, power_index++);
		
		// Extract the last digit of the binary number (0 or 1)
		remainder = binary_input % 10;
		
		// Add the weighted value to the decimal total
		decimal_output = (place_value * remainder) + decimal_output;
		
		// Remove the last digit from the binary number
		binary_input = binary_input / 10;
	}
	
	// Display the final decimal result
	printf("\nthe decimal equivalent of binary %ld is = %ld\n", temp_input, decimal_output);
	
	return(0);
}