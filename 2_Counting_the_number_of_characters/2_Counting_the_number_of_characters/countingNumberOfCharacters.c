/*
2. Counting the Number of Characters

Create a program that prompts for an input string and displays
output that shows the input string and the number of
characters the string contains.

Example Output
What is the input string? Homer
Homer has 5 characters.

Constraints
� Be sure the output contains the original string.
� Use a single output statement to construct the output.
� Use a built-in function of the programming language to
determine the length of the string.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
	char inputString[100];

	memset(inputString, '\0', sizeof(inputString));

	/* Input */
	printf("What is the input string? ");
	scanf("%s", inputString);

	printf("%s has %d characters\n", inputString, strlen(inputString));
}