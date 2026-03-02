#include<stdio.h>

using namespace std;

int main()
{
	int year, basic_year = 1900, leap_year, remaining_year, total_days, day;
	
	// Input the year to find the starting day
	printf("enter the year: ");
	scanf("%d", &year);
	
	// Calculating the number of years passed since 1900
	year = (year - 1) - basic_year;
	
	// Finding leap years and non-leap years in that span
	leap_year = year / 4;
	remaining_year = year - leap_year;
	
	// Calculating total days to find the offset
	total_days = (remaining_year * 365) + (leap_year * 366) + 1;
	day = total_days % 7;
	
	// Determining the day based on the remainder
	if(day == 0)
		printf("monday");
	else
		if(day == 1)
			printf("tuesday");
		else
			if(day == 2)
				printf("wednesday");
			else
				if(day == 3)
					printf("thursday");
				else
					if(day == 4)
						printf("friday");
					else
						if(day == 5)
							printf("saturday");
						else
							if(day == 6)
								printf("sunday");
							else
								printf("wrong entry");
								
	return 0;
}