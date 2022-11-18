/*
 * 2. Sum Cubes

by CodeChum Admin

The square of an integer refers to the result of multiplying the integer with itself once. While the cube of an integer refers to the result of multiplying the integer with itself twice. As long as you know that, you could easily solve this!


Instructions:

    Input three integers and compute the cubes of each of them.
    Check if the sum of the cubes are positive. If it is, print out "Positive", and if not, print out "Negative".

Input

1. First integer

2. Second integer

3. Third integer

Output

The first three lines will contain message prompts to input the three integers.
The last line contains "Positive" or "Negative"

Enter·the·first·integer:·1
Enter·the·second·integer:·2
Enter·the·third·integer:·3
Positive
*/

#include <stdio.h>
int main (void)
{
	int a, b, c, sum;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("Enter the third integer: ");
	scanf("%d", &c);

	a*=a*a;
	b*=b*b;
	c*=c*c;

	sum = a + b + c;
	if (sum >= 0)
	{
		printf("Positive");
	}
	else
	{
		printf("Negative");
	}
}


