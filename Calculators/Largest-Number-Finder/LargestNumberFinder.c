#include<stdio.h>

using namespace std;

int main()
{
	int max_val, first_number, second_number, third_number;
	
	// Input three integers for comparison
	printf("Enter the numbers: ");
	scanf("%d %d %d", &first_number, &second_number, &third_number);
	
	// Step 1: Compare the first two numbers
	if(first_number > second_number)
	{
		max_val = first_number;
	}
	else
	{
		max_val = second_number;
	}
	
	// Step 2: Compare the result with the third number
	if(max_val > third_number)
	{
		printf("%d is largest\n", max_val);
	}
	else
	{
		printf("%d is largest\n", third_number);
	}
	
	return 0;
}