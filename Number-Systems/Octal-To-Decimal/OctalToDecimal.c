#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int octal_input, temp_input, remainder, decimal_output = 0;
	int power_index = 0;
	long int place_value;
	
	// Input an octal number for conversion
	printf("enter an octal number: ");
	scanf("%ld", &octal_input);
	
	// Store original value for final display
	temp_input = octal_input;
	
	// Logic to convert octal to decimal using powers of 8
	while(octal_input != 0)
	{
		// Calculate the positional weight (8^0, 8^1, 8^2, etc.)
		place_value = pow(8, power_index++);
		
		// Extract the last digit of the octal number
		remainder = octal_input % 10;
		
		// Add the weighted value to the decimal total
		decimal_output = (place_value * remainder) + decimal_output;
		
		// Remove the last digit from the octal number
		octal_input = octal_input / 10;
	}
	
	// Display the final decimal result
	printf("\nthe decimal equivalent of octal %ld is = %ld\n", temp_input, decimal_output);
	
	return(0);
}