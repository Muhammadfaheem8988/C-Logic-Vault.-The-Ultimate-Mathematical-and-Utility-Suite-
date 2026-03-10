#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int i, j, rows = 8;

	system("cls");

	// Loop for the first 7 rows to create the tapering pyramid
	for(i = 1; i <= 7; i++)
	{
		// Printing spaces to center the stars
		for(j = 1; j <= (12 - i); j++)
		{
			printf(" ");
		}
		
		// Printing stars (1, 3, 5, 8, 11, 15, 24...)
		// I adjusted the star count to match your manual pattern progression
		if(i <= 3) 
			for(j = 1; j <= (2 * i - 1); j++) printf("*");
		else if(i == 4) 
			for(j = 1; j <= 8; j++) printf("*");
		else if(i == 5) 
			for(j = 1; j <= 11; j++) printf("*");
		else if(i == 6) 
			for(j = 1; j <= 15; j++) printf("*");
		else 
			for(j = 1; j <= 24; j++) printf("*");

		printf("\n");
	}

	// Final base row
	for(i = 1; i <= 25; i++)
	{
		printf("*");
	}
	printf("\n");

	return 0;
}