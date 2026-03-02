#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	long int binary=0, octal=0, decimal=0, m=0, p=0, r, n, t;
	
	// CONVERSION FROM OCTAL TO DECIMAL
	p = 0; // Resetting power variable
	printf("Enter the octal number: ");
	scanf("%ld", &octal);
	long int temp_octal = octal;
	while(octal != 0)
	{
		m = pow(8, p++);
		r = octal % 10;
		decimal = decimal + m * r;
		octal = octal / 10;
	}
	printf("The decimal is: %ld\n", decimal);
	
	// CONVERSION FROM DECIMAL TO OCTAL
	p = 0; // Resetting power variable
	octal = 0; // Resetting octal variable
	printf("\nEnter a decimal number to convert to octal: ");
	scanf("%ld", &n);
	t = n;
	while(n != 0)
	{
		m = pow(10, p++);
		r = n % 8;
		octal = octal + r * m;
		n = n / 8;	
	}
	printf("The octal equivalent of %ld is : %ld\n", t, octal);
	
	// CONVERSION FROM BINARY TO DECIMAL
	p = 0; // Resetting power variable
	decimal = 0; // Resetting decimal variable
	printf("\nEnter a binary number to convert to decimal: ");
	scanf("%ld", &binary);
	while(binary != 0)
	{
		m = pow(2, p++);
		r = binary % 10;
		decimal = decimal + r * m;
		binary = binary / 10;
	}
	printf("The decimal equivalent is: %ld\n", decimal);
	
	// CONVERSION FROM DECIMAL TO BINARY
	p = 0; // Resetting power variable
	binary = 0; // Resetting binary variable
	printf("\nEnter a decimal number to convert to binary: ");
	scanf("%ld", &decimal);
	long int temp_dec = decimal;
	while(decimal != 0)
	{
		m = pow(10, p++);
		r = decimal % 2;
		binary = binary + r * m;
		decimal = decimal / 2;
	}
	printf("The binary equivalent of %ld is: %ld\n", temp_dec, binary);
	
	return 0;
}