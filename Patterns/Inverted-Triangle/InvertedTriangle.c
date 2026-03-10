#include<stdio.h>

using namespace std;

int main()
{
	int i, j;
	
	// Outer loop starts at 10 and decreases to 0
	for(i = 10; i >= 0; i--)
	{
		// Inner loop prints stars based on the current value of i
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		
		// Move to the next line after each row
		printf("\n");
	}
	
	return 0;
}