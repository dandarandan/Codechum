/*
 * 4. That's Odd

by CodeChum Admin

Well, that's odd, or is it? It's your job to find out!


Instructions:

    Input one integer.
    Print out the integer in one line.
    Check if the inputted integer is odd. If it is, print out "Odd" on a new line.

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the inputted integer.
The last line contains "Odd" if the integer is odd.

Enter·n:·5
5
Odd
*/

#include <stdio.h>
int main (void)
{
	int a;

	printf("Enter n: ");
	scanf("%d", &a);
	printf("%d", a);

	if(a % 2 == 1)
	{
		printf("\nOdd");
	}

	return 0;
}
