#include<stdio.h>

using namespace std;

int main()
{
	float total_selling_price, total_gain_loss, number_of_items;
	float total_cost_price, cost_price_per_item, percentage;
	
	// Input total sales data
	printf("Enter the total selling price: ");
	scanf("%f", &total_selling_price);
	
	printf("Enter the profit gain (positive) or loss (negative): ");
	scanf("%f", &total_gain_loss);
	
	printf("Enter the number of items: ");
	scanf("%f", &number_of_items);
	
	// Calculate cost price
	total_cost_price = total_selling_price - total_gain_loss;
	cost_price_per_item = total_cost_price / number_of_items;
	
	// Calculate Percentage based on Cost Price
	// Percentage = (Gain or Loss / Cost Price) * 100
	percentage = (total_gain_loss / total_cost_price) * 100;
	
	// Determining the financial status
	if (total_gain_loss > 0)
	{
		printf("\n--- Profit Analysis ---");
		printf("\nTotal Profit: %.2f", total_gain_loss);
		printf("\nProfit Percentage: %.2f%%", percentage);
	}
	else if (total_gain_loss < 0)
	{
		printf("\n--- Loss Analysis ---");
		printf("\nTotal Loss: %.2f", -total_gain_loss); // Show loss as positive value
		printf("\nLoss Percentage: %.2f%%", -percentage);
	}
	else
	{
		printf("\n--- Break Even Point ---");
		printf("\nNo profit or loss recorded.");
	}
	
	// Display individual unit cost
	printf("\nTotal Cost Price: %.2f", total_cost_price);
	printf("\nCost Price per Item: %.2f\n", cost_price_per_item);
	
	return 0;
}