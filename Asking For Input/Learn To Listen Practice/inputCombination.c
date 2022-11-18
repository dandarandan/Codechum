/*
 * 5. Input Combination

by CodeChum Admin

We’ve tried adding together integers, so how about adding characters as well? Well, we can’t do that with the knowledge we have now, so let’s use placeholders to do the trick!


Instructions:

    Input two characters in one line, separated by a space.
    Make the characters be printed out like it’s concatenated by printing it without spaces in between using placeholders. Refer to the sample output for your reference.
    In your scanf, don't forget to add a space in between the two placeholders for the characters because if you don't, the character that will be scanned for the second variable would actually be the space in between the two characters (because a space is also a character).

Input

1. First character

2. Second character

Output

The first two lines will contain message prompts to input the two characters.
The last line contains the two characters together.

Enter·the·first·character:·A
Enter·the·second·character:·B
AB

*/

#include<stdio.h>
int main(void)
{
	char a, b;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);

	printf("%c%c", a, b);

	return 0;
}
