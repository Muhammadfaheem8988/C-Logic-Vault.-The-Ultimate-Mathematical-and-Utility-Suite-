#include<stdio.h>

using namespace std;

int main()
{
	int i, j, k;

	// Top Half of the Hollow Diamond
	for(i = 1; i <= 5; i++)
	{
		for(j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for(k = 1; k <= i; k++)
		{
			// Print star only at the first or last position of the row
			if(k == 1 || k == i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	// Bottom Half of the Hollow Diamond
	for(i = 4; i >= 1; i--)
	{
		for(j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for(k = 1; k <= i; k++)
		{
			// Print star only at the first or last position of the row
			if(k == 1 || k == i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}