#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int binary_input, temp_input, remainder, decimal_output = 0;
	int power_index = 0, is_valid = 1;
	
	// Prompt user for a binary number
	printf("enter a binary number (0s and 1s only): ");
	scanf("%ld", &binary_input);
	
	// Store the original binary value for final display
	temp_input = binary_input;
	
	// Loop to validate and calculate the decimal value
	while(binary_input != 0)
	{
		// Extract the last digit
		remainder = binary_input % 10;
		
		// Validation check: binary digits must be 0 or 1
		if(remainder > 1)
		{
			is_valid = 0;
			break;
		}
		
		// Add the weighted value (2^power) to the decimal total
		decimal_output = decimal_output + (remainder * pow(2, power_index));
		
		// Prepare for the next digit
		power_index++;
		binary_input = binary_input / 10;
	}
	
	// Final Output based on validation
	if(is_valid == 1)
	{
		printf("\nthe decimal equivalent of binary %ld is = %ld\n", temp_input, decimal_output);
	}
	else
	{
		printf("\nError: %ld is not a valid binary number. Please use only 0s and 1s.\n", temp_input);
	}
	
	return(0);
}