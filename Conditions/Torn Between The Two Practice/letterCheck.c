/*
 * 4. Letter Check

by CodeChum Admin

As long as you haven’t forgotten about C being case-sensitive and you still remember how to scan multiple characters, then you’re good to go!


Instructions:

    Input three characters in three different lines.
    Print out "Equal" if all of the characters are equal. Otherwise, print out "Not Equal". Note, however, that in C language, uppercase and lowercase letters are not equal.

Input

1. First character

2. Second character

3. Third character

Output

The first three lines will contain message prompts to input the three characters.
The last line will contain "Equal" or "Not Equal"

Enter·the·first·character:·C
Enter·the·second·character:·c
Enter·the·third·character:·C
Not·Equal

*/

#include <stdio.h>
int main (void)
{
	char a, b, c;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);
	printf("Enter the third character: ");
	scanf(" %c", &c);

	if(a == b && b == c)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}

	return 0;
}

