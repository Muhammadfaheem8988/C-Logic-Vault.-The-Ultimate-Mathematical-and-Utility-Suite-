#include<stdio.h>

using namespace std;

int main()
{
	int input_number;
	
	// Prompt the user for an integer
	printf("Enter an integer to find if it is even or odd: ");
	scanf("%d", &input_number);
	
	// Logic: If a number divided by 2 has a remainder of 0, it is even
	if(input_number % 2 == 0)
	{
		printf("%d is an even number", input_number);
	}
	else
	{
		printf("%d is an odd number", input_number);
	}
	
	return (0);
}