/*
10 Self-Checkout

Working with multiple inputs and currency can introduce
some tricky precision issues.

Create a simple self-checkout system. Prompt for the prices
and quantities of three items. Calculate the subtotal of the
items. Then calculate the tax using a tax rate of 5.5%. Print
out the line items with the quantity and total, and then print
out the subtotal, tax amount, and total.

Example Output
Enter the price of item 1: 25
Enter the quantity of item 1: 2
Enter the price of item 2: 10
Enter the quantity of item 2: 1
Enter the price of item 3: 4
Enter the quantity of item 3: 1
Subtotal: $64.00
Tax: $3.52
Total: $67.52

Constraints
• Keep the input, processing, and output parts of your
program separate. Collect the input, then do the math
operations and string building, and then print out the
output.
• Be sure you explicitly convert input to numerical data
before doing any calculations.
*/

#include <stdio.h>

main()
{
    int priceItem1, priceItem2, priceItem3;
	int quantityItem1, quantityItem2, quantityItem3;
	float subTotal;
	float tax;
	float total;

	printf("Enter the price of item 1: ");
	scanf("%d", &priceItem1);
    printf("Enter the quantity of item 1: ");
	scanf("%d", &quantityItem1);

	printf("Enter the price of item 2: ");
	scanf("%d", &priceItem2);
    printf("Enter the quantity of item 2: ");
	scanf("%d", &quantityItem2);

	printf("Enter the price of item 3: ");
	scanf("%d", &priceItem3);
    printf("Enter the quantity of item 3: ");
	scanf("%d", &quantityItem3);

	subTotal = (priceItem1 * quantityItem1) + (priceItem2 * quantityItem2) + (priceItem3 * quantityItem3); 
	printf("Subtotal: $%.2f\n", subTotal);

	tax = subTotal * 0.055;
	printf("Tax: $%.2f\n", tax);

	total = subTotal + tax;
	printf("Total: $%.2f\n", total);
}