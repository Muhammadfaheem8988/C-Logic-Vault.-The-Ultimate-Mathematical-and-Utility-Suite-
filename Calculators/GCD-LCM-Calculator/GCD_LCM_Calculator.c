#include<stdio.h>

using namespace std;

int main()
{
	int remainder, first_num, second_num, num1_orig, num2_orig, gcd, lcm;
	
	printf("enter two integer numbers: ");
	scanf("%d %d", &first_num, &second_num);
	
	// Store original values for LCM calculation later
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
	
	// LCM Formula: (a * b) / GCD
	// We use the original numbers because the loop modifies 'first_num' and 'second_num'
	lcm = (num1_orig * num2_orig) / gcd;
	
	printf("GCD value = %d\n", gcd);
	printf("LCM value = %d\n", lcm);
	
	return (0);
}