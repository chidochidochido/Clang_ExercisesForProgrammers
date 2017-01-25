/*
5 Simple Math

You�ll often write programs that deal with numbers. And
depending on the programming language you use, you�ll
have to convert the inputs you get to numerical data types.
Write a program that prompts for two numbers. Print the
sum, difference, product, and quotient of those numbers as
shown in the example output:

Example Output
What is the first number? 10
What is the second number? 5
10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
10 / 5 = 2

Constraints
� Values coming from users will be strings. Ensure that
you convert these values to numbers before doing the
math.
� Keep the inputs and outputs separate from the numerical
conversions and other processing.
� Generate a single output
*/

#include <stdio.h>

int main()
{
	int firstNumber = 0;
	int secondNumber = 0;

	printf("What is the first number? ");
	scanf("%d", &firstNumber);

	printf("What is the second number? ");
	scanf("%d", &secondNumber);

	printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
	printf("%d - %d = %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
	printf("%d * %d = %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
	printf("%d / %d = %d\n", firstNumber, secondNumber, firstNumber / secondNumber);

	return 0;
}