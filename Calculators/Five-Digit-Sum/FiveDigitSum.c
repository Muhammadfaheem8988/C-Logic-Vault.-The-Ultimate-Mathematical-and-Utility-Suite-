#include<stdio.h>

using namespace std;

int main()
{
	long int input_number, sum = 0;
	
	printf("enter a five digit integer: ");
	scanf("%ld", &input_number);
	
	// Extracting and adding each digit one by one
	sum = sum + (input_number % 10); // 1st digit (units)
	input_number = input_number / 10;
	
	sum = sum + (input_number % 10); // 2nd digit (tens)
	input_number = input_number / 10;
	
	sum = sum + (input_number % 10); // 3rd digit (hundreds)
	input_number = input_number / 10;
	
	sum = sum + (input_number % 10); // 4th digit (thousands)
	input_number = input_number / 10;
	
	sum = sum + input_number;        // 5th digit (ten-thousands)
	
	printf("The sum of the digits is = %ld", sum);
	
	return 0;
}