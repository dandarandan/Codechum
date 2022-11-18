/*
 * 7. Sort It Yourself

by CodeChum Admin

Descending order means values arranged from largest to smallest. But in your case, you're going to have to sort these integers in ascending order, which means from smallest to largest.


Instructions:

    Input three integers.
    Print the integers in ascending order using your knowledge on conditional statements.

Input

1. First integer

2. Second integer

3. Third integer

Output

The first three lines will contain message prompts to input the 3 integers.
The last line contains the three integers in ascending order.

Enter·the·first·integer:·6
Enter·the·second·integer:·1
Enter·the·third·integer:·3
1·3·6

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

	if (a <= b && b <= c)
	{
		printf("%d %d %d", a, b, c);
	}
	else if (a <= c && c <= b)
	{
		printf("%d %d %d", a, c, b);
	}
	else if (b <= a && a <= c)
	{
		printf("%d %d %d", b, a, c);
	}
	else if (b <= c && c <= a)
	{
		printf("%d %d %d", b, c, a);
	}
	else if (c <= a && a <= b)
	{
		printf("%d %d %d", c, a, b);
	}
	else
	{
		printf("%d %d %d", c, b, a);
	}

	return 0;
}
