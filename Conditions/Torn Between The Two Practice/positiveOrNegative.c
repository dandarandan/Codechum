/* 
 *1. Positive or Negative?

by CodeChum Admin

When you're feeling good, they call you positive. But when you're feeling down, they call you negative. Try to determine whether a number is positive or negative!


Instructions:

    Input one integer.
    If the integer is positive, print out "Positive". Otherwise, print out "Negative".

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains "Positive" if the integer is positive, or "Negative" if it isn't.

Enter·n:·-12
Negative
*/

#include <stdio.h>
int main (void)
{
	int a;
	printf("Enter n: ");
	scanf("%d", &a);

	if(a >= 0)
	{
		printf("Positive");
	}
	else
	{
		printf("Negative");
	}

	return 0;
}
