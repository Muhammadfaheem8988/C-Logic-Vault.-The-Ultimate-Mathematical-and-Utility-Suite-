#include<stdio.h>

using namespace std;

int main()
{
	int first_number, second_number, third_number, largest_number;
	
	// Input three integers for comparison
	printf("Enter any three integers: ");
	scanf("%d %d %d", &first_number, &second_number, &third_number);
	
	// Shorthand logic using the conditional (ternary) operator
	// It reads as: Is (a > b)? If yes, check (a > c); if no, check (b > c).
	largest_number = (first_number > second_number) ? 
	                 ((first_number > third_number) ? first_number : third_number) : 
	                 ((second_number > third_number) ? second_number : third_number);

	printf("%d is the largest number\n", largest_number);

	return 0;
}