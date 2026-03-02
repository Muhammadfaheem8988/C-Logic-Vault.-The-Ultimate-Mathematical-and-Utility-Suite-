#include<stdio.h>

using namespace std;

int main()
{
	int first_number, second_number, third_number;
	
	// Input three integers for comparison
	printf("Enter any three integers: ");
	scanf("%d %d %d", &first_number, &second_number, &third_number);
	
	// Nested logic to determine the largest number
	if (first_number > second_number)
	{
		if (first_number > third_number)
		{
			printf("%d is the largest number", first_number);
		}
		else
		{
			printf("%d is the largest number", third_number);
		}
	}
	else 
	{
		if(second_number > third_number)
		{
			printf("%d is the largest number", second_number);
		}
		else
		{
			printf("%d is the largest number", third_number);
		}
	}

	return 0;
}