/*
 * 3. Smallest of the Three

by CodeChum Admin

There's always going to be that odd one out. In this case, it's the one with the smallest value. It's your job to determine which one that is!


Instructions:

    Input three integers in one line.
    Evaluate the integers using conditional statements and print out the integer with the smallest value among the three.

Input

1. First integer

2. Second integer

3. Third integer

Output

The first three lines will contain message prompts to input the three integers.
The last line contains the smallest integer.

Enter·the·first·integer:·10
Enter·the·second·integer:·5
Enter·the·third·integer:·-5
Smallest·=·-5

*/

#include <stdio.h>
int main (void)
{
	int a, b, c;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("Enter the third integer: ");
	scanf("%d", &c);

	if (a > b && b > c)
	{
		printf("Smallest = %d", c);
	}
	else if(c > a && a > b)
	{
		printf("Smallest = %d", b);
	}
	else
	{
		printf("Smallest = %d", a);
	}

	return 0;
}
