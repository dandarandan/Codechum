/*
 * 6. Flag Ceremony

by CodeChum Admin

It's quite nostalgic to remember of our elementary days where we used to line up in one straight line first thing in the morning for the daily flag ceremony, right?


Well, since I’m getting so sentimental, let’s make five randomly inputted characters fall in line using code, shall we?

Input

1. First character

2. Second character

3. Third character

4. Fourth character

5. Fifth character

Output

The first five lines will contain message prompts to input the five characters.
The last line will contain the inputted characters separated by a space.

Enter·the·first·character:·a
Enter·the·second·character:·b
Enter·the·third·character:·c
Enter·the·fourth·character:·d
Enter·the·fifth·character:·e
a·b·c·d·e

*/

#include<stdio.h>
int main(void)
{
	char a, b, c, d, e;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);
	printf("Enter the third character: ");
	scanf(" %c", &c);
	printf("Enter the fourth character: ");
	scanf(" %c", &d);
	printf("Enter the fifth character: ");
	scanf(" %c", &e);

	printf("%c %c %c %c %c", a, b, c, d, e);

	return 0;
}
