#include<stdio.h>

using namespace std;

int main()
{
	int a[2][2], b[2][2], c[2][2], i, j;
	
	// Input for the first matrix
	for(i=0; i<2; i++)
	{
		printf("enter elements of matrix 1 for %d row: ", i+1);
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	// Input for the second matrix
	for(i=0; i<2; i++)
	{
		printf("enter elements of matrix 2 for %d row: ", i+1);
		for(j=0; j<2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	// Performing matrix addition
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// Printing the resulting matrix
	printf("\nThe resulting matrix after addition is:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}