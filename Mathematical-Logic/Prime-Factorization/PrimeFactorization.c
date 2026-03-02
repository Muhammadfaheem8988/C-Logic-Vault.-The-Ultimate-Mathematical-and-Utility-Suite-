#include<stdio.h>

using namespace std;

int main()
{
	int num;
	
	// Input a number to find its prime factors
	printf("enter any number: ");
	scanf("%d", &num);
	
	// Outer loop to check for potential factors starting from 2
	for(int i = 2; i <= num; i++)
	{
		// While i divides num, print i and divide num by i
		while(num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
	}
	
	return 0;
}