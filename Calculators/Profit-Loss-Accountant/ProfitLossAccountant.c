#include<stdio.h>

using namespace std;

int main()
{
	float total_selling_price, total_profit_loss, number_of_items, total_cost_price, cost_price_per_item;
	
	// Input total sales data
	printf("Enter the total selling price: ");
	scanf("%f", &total_selling_price);
	
	printf("Enter the profit or loss amount: ");
	scanf("%f", &total_profit_loss);
	
	printf("Enter the number of items: ");
	scanf("%f", &number_of_items);
	
	// Logic to calculate total cost
	// Cost Price = Selling Price - Profit (OR) Selling Price + Loss
	// If the user inputs a positive 'gain', we subtract it to find cost.
	total_cost_price = total_selling_price - total_profit_loss;
	cost_price_per_item = total_cost_price / number_of_items;
	
	// Determining the scenario based on the calculation
	if (total_selling_price > total_cost_price)
	{
		printf("\n--- Profit Scenario ---");
		printf("\nTotal Profit: %.2f", total_profit_loss);
	}
	else if (total_selling_price < total_cost_price)
	{
		printf("\n--- Loss Scenario ---");
		printf("\nTotal Loss: %.2f", (total_cost_price - total_selling_price));
	}
	else
	{
		printf("\n--- Break Even (No Profit, No Loss) ---");
	}
	
	// Common financial results
	printf("\nThe total cost price was: %.2f", total_cost_price);
	printf("\nThe cost price per item is: %.2f", cost_price_per_item);
	
	return 0;
}