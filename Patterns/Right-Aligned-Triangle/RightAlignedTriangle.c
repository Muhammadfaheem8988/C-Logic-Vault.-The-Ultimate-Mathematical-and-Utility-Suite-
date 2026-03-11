#include<stdio.h>

using namespace std;

int main()
{
	int i, j, k;
	
	// Outer loop for the number of rows (1 to 5)
	for(i = 1; i <= 5; i++)
	{
		// First inner loop: prints spaces to push stars to the right
		for(j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		
		// Second inner loop: prints stars for the current row
		for(k = 1; k <= i; k++)
		{
			printf("*");
		}
		
		// Move to the next line
		printf("\n");
	}
	
	return 0;
}