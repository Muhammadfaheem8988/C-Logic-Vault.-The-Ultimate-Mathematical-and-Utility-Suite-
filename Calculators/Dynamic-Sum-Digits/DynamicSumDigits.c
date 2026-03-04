#include<stdio.h>

using namespace std;

int main()
{
	long int n, s = 0;
	
	printf("enter any integer to find the sum of its digits: ");
	scanf("%ld", &n);
	
	// Handling negative numbers by making them positive
	if(n < 0) n = -n;
	
	// Loop until the number becomes 0
	while(n > 0)
	{
		s = s + n % 10;  // Get the last digit and add to sum
		n = n / 10;      // Remove the last digit
	}
	
	printf("The sum of the digits is = %ld", s);
	
	return 0;
}