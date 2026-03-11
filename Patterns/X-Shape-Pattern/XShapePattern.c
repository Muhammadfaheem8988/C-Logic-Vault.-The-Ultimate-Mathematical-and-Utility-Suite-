#include<stdio.h>

using namespace std;

int main()
{
	int i, j;
	
	// Outer loop for rows
	for(i = 0; i < 9; i++)
	{
		// Inner loop for columns
		for(j = 0; j < 9; j++)
		{
			// Condition 1: i == j (Main Diagonal \)
			// Condition 2: j == 8 - i (Anti-Diagonal /)
			if(j == i || j == 8 - i)
			{
				printf("%d", i);
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	
	return 0;
}