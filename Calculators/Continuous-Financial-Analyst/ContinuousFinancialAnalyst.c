#include<stdio.h>

using namespace std;

int main()
{
	float total_selling_price, total_gain_loss, number_of_items;
	float total_cost_price, cost_price_per_item, percentage;
	int choice;
	
	while(1)
	{
		// Main Menu
		printf("\n--- Financial Analysis Menu ---");
		printf("\n1. Analyze New Product/Batch");
		printf("\n2. Exit Program");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		if(choice == 2)
		{
			printf("Exiting... Have a profitable day!\n");
			break;
		}
		else if(choice == 1)
		{
			// Input total sales data
			printf("\nEnter the total selling price: ");
			scanf("%f", &total_selling_price);
			
			printf("Enter the profit gain (+) or loss (-): ");
			scanf("%f", &total_gain_loss);
			
			printf("Enter the number of items: ");
			scanf("%f", &number_of_items);
			
			// Prevent division by zero if items = 0
			if(number_of_items <= 0)
			{
				printf("\nError: Number of items must be greater than zero.\n");
				continue;
			}
			
			// Calculate cost price and percentage
			total_cost_price = total_selling_price - total_gain_loss;
			cost_price_per_item = total_cost_price / number_of_items;
			percentage = (total_gain_loss / total_cost_price) * 100;
			
			// Display Financial Report
			if (total_gain_loss > 0)
			{
				printf("\n--- STATUS: PROFIT ---");
				printf("\nTotal Profit: %.2f", total_gain_loss);
				printf("\nProfit Percentage: %.2f%%", percentage);
			}
			else if (total_gain_loss < 0)
			{
				printf("\n--- STATUS: LOSS ---");
				printf("\nTotal Loss: %.2f", -total_gain_loss);
				printf("\nLoss Percentage: %.2f%%", -percentage);
			}
			else
			{
				printf("\n--- STATUS: BREAK-EVEN ---");
			}
			
			printf("\nTotal Cost Price: %.2f", total_cost_price);
			printf("\nCost Price per Item: %.2f\n", cost_price_per_item);
		}
		else
		{
			printf("\nInvalid selection. Please try again.\n");
		}
	}
	
	return 0;
}