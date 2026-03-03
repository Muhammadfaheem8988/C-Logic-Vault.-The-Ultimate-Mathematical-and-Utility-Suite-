#include<stdio.h>

using namespace std;

int main()
{
	int counter, user_input;
	// long long int allows for much larger numbers than a standard int
	long long int factorial_result = 1;
	
	printf("enter the number of which you wants to find factorial: ");
	scanf("%d", &user_input);
	
	// Basic validation for negative numbers
	if (user_input < 0)
	{
		printf("Factorial is not defined for negative numbers.");
	}
	else
	{
		for(counter = 1; counter <= user_input; counter++)
		{
			factorial_result = factorial_result * counter;
		}
		
		// %lld is the format specifier for long long int
		printf("%lld", factorial_result);
	}
	
	return 0;
}