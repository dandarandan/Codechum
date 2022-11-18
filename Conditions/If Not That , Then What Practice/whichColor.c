/*
 *2. Which Color?

by CodeChum Admin

My favorite color is blue. What's your favorite color? Never mind it doesn't matter, as long as you know how to identify which color is given.


Instructions:

    Input a letter that represents the first letter of a color.
    Using conditional statements, check if the letter satisfies any of these conditions:
        If the letter is 'R' or 'r', print "Red"
        If the letter is 'B' or 'b', print "Blue"
        If the letter is 'G' or 'g', print "Green"
        If no condition is proven true, print "None of the above"

Input

1. First letter of a color

Output

The first line will contain a message prompt to input the first letter of the color.
The next line contains the appropriate message.

Enter·the·first·letter·of·the·color:·r
Red

*/

#include <stdio.h>
int main (void)
{
	char a;

	printf("Enter the first letter of the color: ");
	scanf(" %c", &a);

	if(a == 'R' || a == 'r')
	{
		printf("Red");
	}
	else if(a == 'B' || a == 'b')
	{
		printf("Blue");
	}
	else if (a == 'G' || a == 'g')
	{
		printf("Green");
	}
	else
	{
		printf("None of the above");
	}

	return 0;
}
