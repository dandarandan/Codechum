/*
 * 6. Negative Decimal Tally

by CodeChum Admin

We've been giving positive numbers too much attention lately, it's time to let negative numbers take the spotlight this time!


Instructions:

    Input four float numbers; they could be positive or negative.
    Only add all inputted negative numbers, and print its sum, up to 2 decimal place.
    Hint: The previous/latest topic is about if-else-elseif statements, but do we need one here?

Input

1. First decimal number

2. Second decimal number

3. Third decimal number

4. Fourth decimal number

Output

The first four lines will contain message prompts to input the four decimal numbers.
The last line contains the sum of all the inputted negative numbers, with 2 decimal places.

Enter·the·first·number:·-30.22
Enter·the·second·number:·10.5
Enter·the·third·number:·-2.2
Enter·the·fourth·number:·-1.8
Sum·of·all·negatives·=·-34.22

*/

#include <stdio.h>
int main (void)
{

	double a, b, c, d, sum = 0;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("Enter the third number: ");
	scanf("%lf", &c);
	printf("Enter the fourth number: ");
	scanf("%lf", &d);

	if (a < 0)
	{
		sum+=a;
	}

	if (b < 0)
	{
		sum+=b;
	}
	if (c < 0)
	{
		sum+=c;
	}
	if (d < 0)
	{
		sum+=d;
	}

	printf("Sum of all negatives = %.2lf", sum);

	return 0;

}

