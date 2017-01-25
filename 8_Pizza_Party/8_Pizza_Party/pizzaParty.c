/*
8 Pizza Party

Division isn’t always exact, and sometimes you’ll write
programs that will need to deal with the leftovers as a whole
number instead of a decimal.

Write a program to evenly divide pizzas. Prompt for the
number of people, the number of pizzas, and the number of
slices per pizza. Ensure that the number of pieces comes out
even. Display the number of pieces of pizza each person
should get. If there are leftovers, show the number of leftover
pieces.

Example Output
How many people? 8
How many pizzas do you have? 2
How many slices/pizza? 8
8 people with 2 pizzas
Each person gets 2 pieces of pizza.
There are 0 leftover pieces.

DESIGN:
total_slices =  numPizzas * numSlicesPerPizza
slicesPerPerson = total_slices / numPeople;
remainingSlices = total_slices % numPeople;

*/

#include <stdio.h>

main()
{
	int numPeople;
	int numPizzas;
	int numSlicesPerPizza;
	int totalSlices;
	int slicesPerPerson;
	int remainingSlices;
	
	printf("How many people? ");
	scanf("%d", &numPeople);

	printf("How many pizzas? ");
	scanf("%d", &numPizzas);

	printf("How many slices/pizza? ");
	scanf("%d", &numSlicesPerPizza);

    totalSlices =  numPizzas * numSlicesPerPizza;
    slicesPerPerson = totalSlices / numPeople;
    remainingSlices = totalSlices % numPeople;

	printf("%d people with %d pizzas\n", numPeople, numPizzas);
	printf("Each person gets %d slices of pizza\n", slicesPerPerson);
	printf("There are %d leftover pieces\n", remainingSlices);
}