#include<stdio.h>

using namespace std;

int main()
{
	int amount, h, f, t;
	
	// Input the total amount from the user
	printf("enter the total amount ");
	scanf("%d", &amount);
	
	// Calculating the number of 100 notes
	h = amount / 100;
	amount = amount - h * 100;
	
	// Calculating the number of 50 notes
	f = amount / 50;
	amount = amount - f * 50;
	
	// Calculating the number of 10 notes
	t = amount / 10;
	
	// Displaying the breakdown of currency notes
	printf("\n Number of 100 notes= %d", h);
	printf("\n Number of 50 notes= %d", f);
	printf("\n Number of 10 notes= %d", t);
	
	return 0;
}