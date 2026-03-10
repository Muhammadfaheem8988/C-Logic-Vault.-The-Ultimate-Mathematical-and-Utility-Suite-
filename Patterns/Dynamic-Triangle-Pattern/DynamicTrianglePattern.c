#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int i, j, rows = 5;

	system("CLS");

	// Dynamic Triangle Section
	for(i = 1; i <= rows; i++)
	{
		// Print leading spaces for alignment
		for(j = 1; j <= (rows - i); j++)
		{
			printf(" ");
		}
		
		// Print stars (1, 3, 5, 7, 9...)
		for(j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// Bottom Block Section
	for(i = 1; i <= 3; i++)
	{
		printf("************************\n");
	}

	return 0;
}