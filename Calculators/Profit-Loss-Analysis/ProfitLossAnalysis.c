#include<stdio.h>

using namespace std;

int main()
{
	float total_selling_price, total_profit, number_of_items, total_cost_price, cost_price_per_item;
	
	// Input total sales data
	printf("Enter the sell price: ");
	scanf("%f", &total_selling_price);
	
	printf("Enter the profit gain: ");
	scanf("%f", &total_profit);
	
	printf("Enter the number of items: ");
	scanf("%f", &number_of_items);
	
	// Logic to calculate total cost and individual item cost
	total_cost_price = total_selling_price - total_profit;
	cost_price_per_item = total_cost_price / number_of_items;
	
	// Displaying the financial results
	printf("The total cost price was: %.2f", total_cost_price);
	printf("\nThe cost price per item is: %.2f", cost_price_per_item);
	
	return 0;
}