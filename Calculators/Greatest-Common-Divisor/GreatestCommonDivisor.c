#include<stdio.h>

using namespace std;

int main()
{
	int remainder, first_number, second_number;
	
	printf("enter two integer numbers: ");
	scanf("%d %d", &first_number, &second_number);
	
	// Implementation of the Euclidean Algorithm
	while(second_number != 0)
	{
		remainder = first_number % second_number;
		first_number = second_number;
		second_number = remainder;
	}
	
	// The GCD is the last non-zero value of the first_number
	printf("GCD value = %d\n", first_number);
	
	return (0);
}