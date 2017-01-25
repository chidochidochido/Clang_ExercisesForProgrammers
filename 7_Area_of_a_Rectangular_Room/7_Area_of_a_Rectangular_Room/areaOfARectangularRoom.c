/*
7 Area of a Rectangular Room

When working in a global environment, you’ll have to
present information in both metric and Imperial units. And
you’ll need to know when to do the conversion to ensure
the most accurate results.

Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then
display the area in both square feet and square meters.

Example Output
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters

The formula for this conversion is
m2 = f2 × 0.09290304
*/

#include <stdio.h>

#define CONVERSION_SQ_FEET_TO_SQ_METERS ((float)0.09290304)

main()
{
	int length;
	int width;
	int area;

	printf("What is the length of the room in feet? ");
	scanf("%d", &length);

	printf("What is the width of the room in feet? ");
	scanf("%d", &width);

	area = length * width;

	printf("You entered dimensions of %d feet by %d feet.\n", length, width);
	printf("The area is\n");
	printf("%d square feet\n", area);
    printf("%.3f square meters", area * CONVERSION_SQ_FEET_TO_SQ_METERS);
}