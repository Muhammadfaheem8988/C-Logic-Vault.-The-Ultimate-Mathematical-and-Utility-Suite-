#include <stdio.h>

using namespace std;

int main()
{
	float sub_1, sub_2, sub_3, sub_4, sub_5, total_obtained, percentage;
	
	// Input marks for five different subjects
	printf("Enter student marks in five subjects: ");
	scanf("%f %f %f %f %f", &sub_1, &sub_2, &sub_3, &sub_4, &sub_5);
	
	// Calculating the sum of all subjects
	total_obtained = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
	
	// Calculating percentage based on a maximum of 500 marks
	percentage = (total_obtained / 500) * 100;
	
	// Display results with 2-decimal precision
	printf("\nobtained marks = %.2f", total_obtained);
	printf("\npercentage of marks = %.2f%%", percentage);
	
	return 0;
}