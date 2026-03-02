#include<stdio.h>

using namespace std;

int main()
{
	float length, width, perimeter, rect_area, circle_area, radius, circum;
	int choice;
	
	// Continuous loop for multiple calculations
	while(1)
	{
		// Displaying the choice menu
		printf("\n\n--- Shape Calculator Menu ---");
		printf("\nPress 1 for Rectangle Calculations");
		printf("\nPress 2 for Circle Calculations");
		printf("\nPress 3 to Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		// Logic to break the loop and exit
		if(choice == 3)
		{
			printf("\nExiting program...");
			break;
		}
		
		// Logic for Rectangle
		if(choice == 1)
		{
			printf("enter the length and breath of rectangle: ");
			scanf("%f %f", &length, &width);
			
			rect_area = length * width;
			perimeter = 2 * (length + width);
			
			printf("\nthe area of rectangle is=%.2f", rect_area);
			printf("\nthe perimeter of rectangle is=%.2f", perimeter);
		}
		// Logic for Circle
		else if(choice == 2)
		{
			printf("enter the radius of circle: ");
			scanf("%f", &radius);
			
			circle_area = 3.1415 * radius * radius;
			circum = 2 * 3.1415 * radius;
			
			printf("\nthe area of circle is=%.2f", circle_area);
			printf("\nthe circumference of circle is=%.2f", circum);
		}
		else
		{
			printf("\nInvalid Choice! Please try again.");
		}
	}
	
	return 0;
}