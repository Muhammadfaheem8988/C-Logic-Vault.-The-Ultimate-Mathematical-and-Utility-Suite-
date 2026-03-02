#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int octal_input, temp_input, remainder, decimal_output = 0;
	int power_index = 0, is_valid = 1;
	long int place_value;
	
	// Prompt user for an octal number
	printf("enter an octal number (0-7 only): ");
	scanf("%ld", &octal_input);
	
	// Store original value for final display
	temp_input = octal_input;
	
	// Loop to validate and calculate the decimal value
	while(octal_input != 0)
	{
		// Extract the last digit
		remainder = octal_input % 10;
		
		// Validation check: octal digits must be between 0 and 7
		if(remainder > 7)
		{
			is_valid = 0;
			break;
		}
		
		// Calculate the positional weight (8^power)
		place_value = pow(8, power_index++);
		
		// Add the weighted value to the decimal total
		decimal_output = decimal_output + (remainder * place_value);
		
		// Remove the last digit from the octal number
		octal_input = octal_input / 10;
	}
	
	// Final Output based on validation status
	if(is_valid == 1)
	{
		printf("\nthe decimal equivalent of octal %ld is = %ld\n", temp_input, decimal_output);
	}
	else
	{
		printf("\nError: %ld is not a valid octal number. Digits must be between 0 and 7.\n", temp_input);
	}
	
	return(0);
}