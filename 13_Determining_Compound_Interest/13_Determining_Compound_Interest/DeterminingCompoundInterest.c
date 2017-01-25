/*
13 Determining Compound Interest

Simple interest is something you use only when making a
quick guess. Most investments use a compound interest
formula, which will be much more accurate. And this formula
requires you to incorporate exponents into your programs.
Write a program to compute the value of an investment
compounded over time. The program should ask for the
starting amount, the number of years to invest, the interest
rate, and the number of periods per year to compound.
The formula you’ll use for this is
A = P(1 + r/n)^nt

where
• P is the principal amount.
• r is the annual rate of interest.
• t is the number of years the amount is invested.
• n is the number of times the interest is compounded per
year.
• A is the amount at the end of the investment.
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
	float principal;
	float annualRateOfInterest;
	float amountAtEndOfInvestment;

	int numberOfYears;
	int numberOfTimesInterestIsCompoundedPerYear;
	
	float f_tempVar;

	printf("What is the principal amount? ");
	scanf("%f", &principal);

	printf("What is the rate? ");
	scanf("%f", &annualRateOfInterest);

	printf("What is the number of years? ");
	scanf("%d", &numberOfYears);

	printf("What is the number of times the interest is compounded per year? ");
	scanf("%d", &numberOfTimesInterestIsCompoundedPerYear);

	annualRateOfInterest = annualRateOfInterest / 100;
	f_tempVar = annualRateOfInterest / numberOfTimesInterestIsCompoundedPerYear;
	f_tempVar = (float)1 + f_tempVar;
	f_tempVar = powf(f_tempVar, numberOfTimesInterestIsCompoundedPerYear * numberOfYears);
	amountAtEndOfInvestment = principal * f_tempVar;

	printf("Final: $%0.2f", amountAtEndOfInvestment);

}