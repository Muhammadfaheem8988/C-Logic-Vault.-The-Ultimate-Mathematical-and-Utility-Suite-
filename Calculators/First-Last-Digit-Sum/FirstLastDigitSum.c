#include<stdio.h>

using namespace std;

int main()
{
	int input_number, sum = 0;
	
	printf("enter a four digit number to find sum of first and last digit: ");
	scanf("%d", &input_number);
	
	// Get the last digit (units place) using modulus
	sum = sum + (input_number % 10);
	
	// Shift decimal place to the left 3 times to get the first digit (thousands place)
	input_number = input_number / 10;
	input_number = input_number / 10;
	input_number = input_number / 10;
	
	// Add the remaining first digit to the sum
	sum = sum + input_number;
	
	printf("the sum of first and last digit is = %d", sum);
	
	return 0;
}