#include<stdio.h>

using namespace std;

int main()
{
	int number;
	
	printf("Enter an integer to find its even or odd (Bitwise): ");
	scanf("%d", &number);
	
	// Bitwise AND operation: checks the last bit of the binary representation
	// If (number & 1) is true (1), the number is odd.
	if(number & 1)
	{
		printf("%d is an odd number", number);
	}
	else
	{
		printf("%d is an even number", number);
	}
	
	return (0);
}