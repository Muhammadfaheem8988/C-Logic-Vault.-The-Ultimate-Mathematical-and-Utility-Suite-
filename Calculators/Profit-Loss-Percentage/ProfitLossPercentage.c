#include<stdio.h>

using namespace std;

int main()
{
	float selling_price, cost_price, profit, loss, percentage;
	
	// Input the cost and selling prices
	printf("Enter the cost price of the item: ");
	scanf("%f", &cost_price);
	
	printf("Enter the selling price of the item: ");
	scanf("%f", &selling_price);
	
	// Calculate potential values for both scenarios
	loss = cost_price - selling_price;
	profit = selling_price - cost_price;
	
	// Determine and display the financial outcome with percentage
	if(selling_price > cost_price)
	{
		// Percentage = (Profit / Cost Price) * 100
		percentage = (profit / cost_price) * 100;
		
		printf("you have made profit");
		printf("\n%.2f is your total profit", profit);
		printf("\nProfit Percentage: %.2f%%", percentage);
	}
	else if(cost_price > selling_price)
	{
		// Percentage = (Loss / Cost Price) * 100
		percentage = (loss / cost_price) * 100;
		
		printf("you are in loss");
		printf("\n%.2f is your total loss", loss);
		printf("\nLoss Percentage: %.2f%%", percentage);
	}
	else
	{
		printf("No profit, no loss (Break-even)");
	}

	return 0;
}