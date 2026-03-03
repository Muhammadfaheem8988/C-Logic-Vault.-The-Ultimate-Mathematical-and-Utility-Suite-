#include<stdio.h>

using namespace std;

int main()
{
	int remainder, first_num, second_num, num1_orig, num2_orig, gcd, lcm;
	
	printf("enter two integer numbers: ");
	scanf("%d %d", &first_num, &second_num);
	
	// Convert inputs to absolute values (positive) for correct math logic
	if (first_num < 0) first_num = -first_num;
	if (second_num < 0) second_num = -second_num;
	
	// Store original positive values for LCM calculation
	num1_orig = first_num;
	num2_orig = second_num;
	
	// Euclidean Algorithm loop
	while(second_num != 0)
	{
		remainder = first_num % second_num;
		first_num = second_num;
		second_num = remainder;
	}
	
	gcd = first_num;
	
	// Handle case where both numbers might be zero to avoid division by zero
	if (gcd == 0) 
	{
		printf("GCD and LCM are undefined for zero values.\n");
	}
	else 
	{
		lcm = (num1_orig * num2_orig) / gcd;
		printf("GCD value = %d\n", gcd);
		printf("LCM value = %d\n", lcm);
	}
	
	return (0);
}