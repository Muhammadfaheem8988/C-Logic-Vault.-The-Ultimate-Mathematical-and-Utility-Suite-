#include<stdio.h>

using namespace std;

// Function definition for GCD using your logic
int find_gcd(int second_num, int first_num)
{
	int remainder;
	while(second_num != 0)
	{
		remainder = first_num % second_num;
		first_num = second_num;
		second_num = remainder;
	}
	// When the loop ends, first_num holds the GCD
	return first_num;	
}

int main()
{
	int gcd_result, num1, num2;
	
	printf("enter two integer numbers: ");
	scanf("%d %d", &num1, &num2);
	
	// Assigning the return value of the function to gcd_result
	gcd_result = find_gcd(num2, num1);
	
	printf("GCD value = %d\n", gcd_result);
	
	return 0;
}