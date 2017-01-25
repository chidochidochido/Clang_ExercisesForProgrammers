/*
9 Paint Calculator

Sometimes you have to round up to the next number rather
than follow standard rounding rules.
Calculate gallons of paint needed to paint the ceiling of a
room. Prompt for the length and width, and assume one
gallon covers 350 square feet. Display the number of gallons
needed to paint the ceiling as a whole number.

Example Output
You will need to purchase 2 gallons of
paint to cover 360 square feet.
Remember, you can’t buy a partial gallon of paint. You must
round up to the next whole gallon.

Constraints
• Use a constant to hold the conversion rate.
• Ensure that you round up to the next whole number.
*/

#include <stdio.h>
#include <math.h>

#define COVER_AREA_FOR_GALLON_SQ_FT    ((float)350)

main()
{
	int width;
	int length;
	int area;
	int numGallons;

	printf("Width of area: ");
	scanf("%d", &width);

	printf("Length of area: ");
	scanf("%d", &length);

	area = width * length;

	numGallons = (int)ceil(area / COVER_AREA_FOR_GALLON_SQ_FT);

	printf("You will need to purchase %d gallons of\n", numGallons);
	printf("paint to cover %d square feet.\n", area);
	printf("Remember, you can't buy a partial gallon of paint. You must\n");
	printf("round up to the next whole gallon");
}