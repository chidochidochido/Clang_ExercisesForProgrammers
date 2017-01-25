/*
3 Printing Quotes

Quotation marks are often used to denote the start and end
of a string. But sometimes we need to print out the quotation
marks themselves by using escape characters.
Create a program that prompts for a quote and an author.
Display the quotation and author as shown in the example
output.

Example Output
What is the quote? These aren't the droids you're looking for.
Who said it? Obi-Wan Kenobi
Obi-Wan Kenobi says, "These aren't the droids
you're looking for."

Constraints
• Use a single output statement to produce this output,
using appropriate string-escaping techniques for quotes.
• If your language supports string interpolation or string
substitution, don’t use it for this exercise. Use string
concatenation instead.
*/

#include <stdio.h>
#include <string>

int main()
{
	char quote[100];
	char author[20];

	memset(quote, '\0', sizeof(quote));
	memset(author, '\0', sizeof(author));

	printf("What is the quote? ");
	scanf("%s", quote);

	printf("Who said it? ");
	scanf("%s", author);

	printf("%s says, \"%s\"\n", author, quote);
	
	return 0;
}