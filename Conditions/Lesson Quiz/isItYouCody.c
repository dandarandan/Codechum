/*
 * 4. Is It You, Cody?

by CodeChum Admin

Can you identify if Cody's name is spelled right? If so, then make a program that accepts four one-letter strings separated by space and print "Correct" if the inputted strings, combined in order, spell the name Cody correctly. If not, print "Wrong". It doesn't matter if it's in uppercase or lowercase, as long as it's spelled correctly, it's considered correct.


Now, will you take on this task?

Input

1. First character

2. Second character

3. Third character

4. Fourth character

Output

The first four lines will contain message prompts to input the four characters.
The last line contains the appropriate string.

Enter·the·first·character:·c
Enter·the·second·character:·O
Enter·the·third·character:·D
Enter·the·fourth·character:·y
Correct

*/

#include <stdio.h>
int main (void)
{
	char a, b, c, d;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);
	printf("Enter the third character: ");
	scanf(" %c", &c);
	printf("Enter the fourth character: ");
	scanf(" %c", &d);

	if (a == 'C' || a == 'c')
	{
		if (b == 'O' || b == 'o')
		{
			if (c == 'D' || c == 'd')
			{
				if (d == 'Y' || d == 'y')
				{
					printf("Correct");
				}
			} else {
				printf("Wrong");
			}
		} else {
			printf("Wrong");
		}
	} else {
		printf("Wrong");
	}

	return 0;
}
