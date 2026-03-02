#include<stdio.h>

using namespace std;

int main()
{
	float length, width, perimeter, rect_area, circle_area, radius, circum;
	
	// Input dimensions for the rectangle
	printf("enter the length and breath of rectangle: ");
	scanf("%f %f", &length, &width);
	
	// Input dimensions for the circle
	printf("enter the radius of circle: ");
	scanf("%f", &radius);
	
	// Rectangle calculations
	rect_area = length * width;
	perimeter = 2 * (length + width);
	
	// Circle calculations using 3.1415 for Pi
	circle_area = 3.1415 * radius * radius;
	circum = 2 * 3.1415 * radius;
	
	// Displaying results with 2 decimal places
	printf("\nthe area of rectangle is=%.2f", rect_area);
	printf("\nthe perimeter of rectangle is=%.2f", perimeter);
	printf("\nthe area of circle is=%.2f", circle_area);
	printf("\nthe circumference of circle is=%.2f", circum);	
	
	return 0;
}