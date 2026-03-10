#include<stdio.h>

using namespace std;

int main()
{
	int n, p, r = 1;
	
	printf("enter the number and its power: ");
	scanf("%d %d", &n, &p);
	
	// Multiply the base number 'n', 'p' number of times
	for(int i = 1; i <= p; i++)
	{
		r = r * n;
	}
	
	printf("the result is = %d ", r);
	
	return 0;
}