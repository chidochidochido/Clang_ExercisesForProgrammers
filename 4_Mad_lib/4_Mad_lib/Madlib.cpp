/* 
4 Mad libs

Mad libs are a simple game where you create a story template
with blanks for words. You, or another player, then
construct a list of words and place them into the story, creating
an often silly or funny story as a result.
Create a simple mad-lib program that prompts for a noun,
a verb, an adverb, and an adjective and injects those into a
story that you create.

Example Output
Enter a noun: dog
Enter a verb: walk
Enter an adjective: blue
Enter an adverb: quickly
Do you walk your blue dog quickly? That's hilarious!

Constraints
• Use a single output statement for this program.
• If your language supports string interpolation or string
substitution, use it to build up the output. */

#include <stdio.h>
#include <string>

int main()
{
	char noun[10];
	char verb[10];
	char adjective[10];
	char adverb[10];

	/*Initialize arrays*/
	memset(noun, '\0', sizeof(noun));
	memset(verb, '\0', sizeof(noun));
	memset(adjective, '\0', sizeof(noun));
	memset(adverb, '\0', sizeof(noun));

	/*Prompt for inputs*/
	printf("Enter a noun: ");
	scanf("%s", noun);

	printf("Enter a verb: ");
	scanf("%s", verb);

	printf("Enter an adjective: ");
	scanf("%s", adjective);

	printf("Enter a adverb: ");
	scanf("%s", adverb);

	printf("Do you %s your %s %s %s", verb, adjective, noun, adverb);

	return 0;
}