#include<stdio.h>

using namespace std;

int main()
{
	int i, j;
	
	// Outer loop runs from 0 to 8
	for(i = 0; i < 9; i++)
	{
		// Inner loop prints dashes based on the current value of i
		for(j = 1; j <= i; j++)
		{
			printf("-");
		}
		
		// Print the current row number and move to the next line
		printf("%d\n", i);
	}
	
	return 0;
}