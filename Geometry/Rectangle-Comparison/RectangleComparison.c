#include<stdio.h>

using namespace std;

int main()
{
	float length, width, perimeter, area;
	
	// Input for rectangle dimensions
	printf("enter the length of the rectangle: ");
	scanf("%f", &length);
	
	printf("enter the width of the rectangle: ");
	scanf("%f", &width);
	
	// Calculating area and perimeter
	area = length * width;
	perimeter = (2 * length) + (2 * width);
	
	// Comparing area and perimeter values
	if(area > perimeter)
	{
		printf("\narea is greater than it's perimeter");
	}
	else
	{
		printf("\nperimeter is greater than it's area");
	}
	
	// Displaying final results
	printf("\nbecause area = %f \nperimter= %f", area, perimeter);
	
	return 0;
}