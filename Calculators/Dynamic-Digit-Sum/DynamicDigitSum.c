#include<stdio.h>

using namespace std;

int main()
{
	int input_number, first_digit, last_digit, sum;
	
	printf("Enter any integer to find the sum of its first and last digit: ");
	scanf("%d", &input_number);
	
	// Ensure we handle negative numbers by converting to absolute value
	if(input_number < 0) input_number = -input_number;

	// The last digit is always the remainder when divided by 10
	last_digit = input_number % 10;
	
	// Copy the input to a temporary variable to find the first digit
	first_digit = input_number;
	
	// Loop until only one digit remains
	while(first_digit >= 10)
	{
		first_digit = first_digit / 10;
	}
	
	sum = first_digit + last_digit;
	
	printf("\nFirst Digit: %d", first_digit);
	printf("\nLast Digit: %d", last_digit);
	printf("\nSum of first and last digit is = %d\n", sum);
	
	return 0;
}