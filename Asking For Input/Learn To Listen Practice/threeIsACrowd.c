/* 2. Three is a Crowd

by CodeChum Admin

This one’s pretty simple as well, but I hope you haven’t forgotten how to create a new line!


Instructions:

    Input three random characters and make sure they are inputted on different lines.
    Print out the three characters in order, each on a different line, using only 1 printf() statement and newline characters (\n).
    An initial code with the one printf() is provided for you, just complete the missing items inside it. Do not add any other printf()'s

Input

1. Three characters

Output

The first three lines will contain message prompts to input the three characters.
The last lines contain the three characters inputted.

Enter·the·first·character:·A
Enter·the·second·character:·B
Enter·the·third·character:·C
A
B
C

*/

#include <stdio.h>
int main(void)
{

	char a, b, c;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);
	printf("Enter the third character: ");
	scanf(" %c", &c);

	printf("%c\n%c\n%c", a, b, c);

	return 0;
}
