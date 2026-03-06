#include<stdio.h>

using namespace std;

int main()
{
	int matrix[3][4], row, col;
	
	// Input phase: Nested loops to fill the 3x4 grid
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 4; col++)
		{
			printf("Enter the value for [%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);
		}
	}
	
	printf("\n--- Displaying the Matrix ---\n");
	
	// Output phase: Nested loops to display values in grid format
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 4; col++)
		{
			// Accessing the value at matrix[row][col]
			printf("%d\t", matrix[row][col]);
		}
		printf("\n"); // New line after each row for a matrix look
	}
	
	return 0;
}