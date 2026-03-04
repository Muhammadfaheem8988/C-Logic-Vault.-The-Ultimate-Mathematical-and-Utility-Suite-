#include <stdio.h>

using namespace std;

int main()
{
	int input_number, is_prime = 1; // 1 means true, 0 means false
	
	printf("enter the number: ");
	scanf("%d", &input_number);
	
	// Handling edge cases for numbers less than 2
	if (input_number < 2)
	{
		is_prime = 0;
	}
	else
	{
		// Logic: Check for factors from 2 up to the square root of the number
		for (int i = 2; i * i <= input_number; i++)
		{
			if (input_number % i == 0)
			{
				is_prime = 0; // Found a factor, so it is NOT prime
				break;        // No need to check further
			}
		}
	}
	
	// Final result based on the flag
	if (is_prime == 1)
	{
		printf("%d is a prime number", input_number);
	}
	else
	{
		printf("%d is not a prime number", input_number);
	}

	return 0;
}