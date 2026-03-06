#include<stdio.h>

using namespace std;

int main()
{
	long int total_pop, men, women, total_literate;
	long int lit_men, lit_women, illit_men, illit_women;
	int per_men, per_total_lit, per_lit_men;
	
	// User Inputs
	printf("Enter the total population of the city: ");
	scanf("%ld", &total_pop);
	
	printf("Enter percentage of Men in population: ");
	scanf("%d", &per_men);
	
	printf("Enter percentage of total Literacy: ");
	scanf("%d", &per_total_lit);
	
	printf("Enter percentage of Literate Men (relative to total population): ");
	scanf("%d", &per_lit_men);
	
	// 1. Calculate Men and Women counts
	men = (per_men * total_pop) / 100;
	women = total_pop - men; 
	
	// 2. Calculate Total Literate and Literate Men counts
	total_literate = (per_total_lit * total_pop) / 100;
	lit_men = (per_lit_men * total_pop) / 100;
	
	// 3. Calculate Literate Women (Difference between total lit and lit men)
	lit_women = total_literate - lit_men;
	
	// 4. Calculate Illiterate Men and Women
	illit_men = men - lit_men;
	illit_women = women - lit_women;
	
	// Display the Report
	printf("\n--- Population Analysis Report ---");
	printf("\nTotal Men: %ld | Total Women: %ld", men, women);
	printf("\nLiterate Men: %ld | Literate Women: %ld", lit_men, lit_women);
	printf("\n----------------------------------");
	printf("\nIlliterate Men: %ld", illit_men);
	printf("\nIlliterate Women: %ld\n", illit_women);
	
	return 0;	
}