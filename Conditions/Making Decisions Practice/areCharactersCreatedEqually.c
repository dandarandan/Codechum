/*
 * 3. Are Characters Created Equally?

by CodeChum Admin

Do you believe in doppelgangers? Well they are very much possible with characters! Check if the two given characters are the same or not, and remember that C is case-sensitive!


Instructions:

    Input two characters in different lines (one each line). Again, don't forget to add a space in between the two placeholders for the characters when you scan them so that the newline character after the first character will be ignored.
    Print out the characters in one line, separate them with a forward slash (\).
    Check whether the two characters are equal, print out "Equal" if they are.

Input

1. First character

2. Second character

Output

The first two lines will contain message prompts to input the two characters.
The next line contains the inputted characters separated by a forward slash.
The last line contains "Equal" if the two characters are equal.

Enter·the·first·character:·C
Enter·the·second·character:·C
C\C
Equal

*/

#include <stdio.h>
int main (void)
{
	char a, b;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);
	printf("%c\\%c", a, b);

	if(a == b)
	{
		printf("\nEqual");
	}
	
	return 0;
}
