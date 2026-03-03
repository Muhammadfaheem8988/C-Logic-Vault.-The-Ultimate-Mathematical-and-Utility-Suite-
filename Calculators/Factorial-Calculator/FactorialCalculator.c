#include<stdio.h>

using namespace std;

int main()
{
	int counter, user_input, factorial_result = 1;
	
	// Prompt for the number to calculate
	printf("enter the number of which you wants to find factorial: ");
	scanf("%d", &user_input);
	
	// Loop from 1 up to the input number
	for(counter = 1; counter <= user_input; counter++)
	{
		factorial_result = factorial_result * counter;
	}
	
	// Display only the final result as per your style
	printf("%d", factorial_result);
	
	return 0;
}