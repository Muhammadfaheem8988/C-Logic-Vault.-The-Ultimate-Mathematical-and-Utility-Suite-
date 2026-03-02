#include<stdio.h>

using namespace std;

int main()
{
	float selling_price, cost_price, profit, loss;
	
	// Input the cost and selling prices
	printf("Enter the cost price of the item: ");
	scanf("%f", &cost_price);
	
	printf("Enter the selling price of the item: ");
	scanf("%f", &selling_price);
	
	// Calculate potential values for both scenarios
	loss = cost_price - selling_price;
	profit = selling_price - cost_price;
	
	// Determine and display the financial outcome
	if(selling_price > cost_price)
	{
		printf("you have made profit ");
		printf("\n%f is your total profit", profit);
	}
	else if(cost_price > selling_price)
	{
		printf("you are in loss");
		printf("\n%f is your total loss", loss);
	}
	else
	{
		printf("No profit, no loss (Break-even)");
	}

	return 0;
}