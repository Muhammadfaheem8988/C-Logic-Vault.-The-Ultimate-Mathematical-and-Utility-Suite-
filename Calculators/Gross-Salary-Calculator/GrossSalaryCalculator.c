#include <stdio.h>

using namespace std;

int main()
{
	float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;
	
	printf("enter the basic salary = ");
	scanf("%f", &basic_salary);
	
	// Calculating allowances based on percentage of basic salary
	dearness_allowance = 0.4 * basic_salary;   // 40% DA
	house_rent_allowance = 0.2 * basic_salary; // 20% HRA
	
	// Gross Salary is the sum of basic and all allowances
	gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
	
	printf("gross salary is = Rs %.2f", gross_salary);
	
	return 0;
}