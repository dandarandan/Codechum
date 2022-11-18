/*
 * 5. The Greater One

by CodeChum Admin

Let us now try comparing two numbers by letting the user input two different numbers and say "Greater" if the first inputted number is greater than the second one, and "Lesser" if it’s the other way around.


Let's go!

Input

1. First number

2. Second number

Output

The first line will contain a message prompt to input the first number.
The second line will contain a message prompt to input the second number.
The last line contains the appropriate string.

Enter·the·first·number:·1.2
Enter·the·second·number:·1.02
Greater

*/

#include <stdio.h>
int main (void)
{
	double a, b;

	printf("Enter the first number: "); 
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);

	if (a > b)
	{
		printf("Greater");
	} else {
		printf("Lesser");
	}

	return 0;
}
