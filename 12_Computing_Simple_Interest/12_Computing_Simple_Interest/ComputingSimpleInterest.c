/*
12 Computing Simple Interest

Computing simple interest is a great way to quickly figure
out whether an investment has value. It’s also a good way
to get comfortable with explicitly coding the order of operations
in your programs.

Create a program that computes simple interest. Prompt for
the principal amount, the rate as a percentage, and the time,
and display the amount accrued (principal + interest).

The formula for simple interest is A = P(1 + rt), where P is
the principal amount, r is the annual rate of interest, t is the
number of years the amount is invested, and A is the amount
at the end of the investment.

Example Output
Enter the principal: 1500
Enter the rate of interest: 4.3
Enter the number of years: 4
After 4 years at 4.3%, the investment will
be worth $1758.

Constraints
• Prompt for the rate as a percentage (like 15, not .15).
Divide the input by 100 in your program.
• Ensure that fractions of a cent are rounded up to the
next penny.
• Ensure that the output is formatted as money.
*/
#include <stdio.h>
#include <math.h>

float roundToCents(float f_numberToRound)
{
    int i_roundedNumber = 0;
	float f_returnValue;

	f_numberToRound *= 100;

	i_roundedNumber = (int)(f_numberToRound < 0) ? (f_numberToRound - 0.5) : (f_numberToRound + 0.5);

	f_returnValue = i_roundedNumber / 100;

	return f_returnValue;
}

void main(void)
{
	float principal;
	float rateOfInterest;
	float totalValue;
	int years;

	printf("Enter the principal: ");
	scanf("%f", &principal);

	printf("Enter the rate of interest: ");
	scanf("%f", &rateOfInterest);

	/*Input is a percentage, divide by 100 for operations*/
	rateOfInterest /= 100;

	printf("Enter the number of years: ");
	scanf("%d", &years);

	totalValue = principal * (1.0 + (rateOfInterest * years));

	/* round value to cents */
	roundToCents(totalValue);

	printf("After %d years at %.1f the investment will\n", years, rateOfInterest);
	printf("be worth $%0.2f", totalValue);

}