#include <stdio.h>

using namespace std;

int main()
{
	float sub_1, sub_2, sub_3, sub_4, sub_5, total_obtained, percentage;
	
	// Input marks for five different subjects
	printf("Enter student marks in five subjects: ");
	scanf("%f %f %f %f %f", &sub_1, &sub_2, &sub_3, &sub_4, &sub_5);
	
	total_obtained = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
	percentage = (total_obtained / 500) * 100;
	
	printf("\nObtained marks = %.2f", total_obtained);
	printf("\nPercentage of marks = %.2f%%", percentage);

	// Grade Selection Logic (If-Else Ladder)
	printf("\nGrade: ");
	if (percentage >= 90)
	{
		printf("A+ (Excellent)");
	}
	else if (percentage >= 80)
	{
		printf("A (Very Good)");
	}
	else if (percentage >= 70)
	{
		printf("B (Good)");
	}
	else if (percentage >= 60)
	{
		printf("C (Satisfactory)");
	}
	else if (percentage >= 50)
	{
		printf("D (Pass)");
	}
	else
	{
		printf("F (Fail)");
	}
	
	printf("\n");
	return 0;
}