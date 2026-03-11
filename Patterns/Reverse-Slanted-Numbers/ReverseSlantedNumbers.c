#include<stdio.h>

using namespace std;

int main()
{
	int i, j;
	
	// Outer loop runs from 0 to 8
	for(i = 0; i < 9; i++)
	{
		// Inner loop prints a decreasing number of dashes
		// Starts at 8 dashes and moves down to 0
		for(j = 1; j <= (8 - i); j++)
		{
			printf("-");
		}
		
		// Print the current row number
		printf("%d\n", i);
	}
	
	return 0;
}