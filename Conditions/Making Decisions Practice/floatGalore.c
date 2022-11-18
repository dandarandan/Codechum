/*
 *5. Float Galore

by CodeChum Admin

We've been dealing with integers too much, it's time for float to shine!


Instructions:

    Input five float numbers.
    Print out the float numbers in one line, separated by spaces, and make sure you only print up to 1 decimal place.
    Add the first four float numbers and check if their sum is greater than the fifth float number. Print out "Yes" if they are.

Input

1. First float number

2. Second float number

3. Third float number

4. Fourth float number

5. Fifth float number

Output

The first five lines will contain message prompts to input the five float numbers.
The next line contains the inputted float numbers.
The last line contains "Yes" if the condition is true.

Enter·the·first·number:·1.1
Enter·the·second·number:·1.2
Enter·the·third·number:·1.3
Enter·the·fourth·number:·1.4
Enter·the·fifth·number:·1.1
1.1·1.2·1.3·1.4·1.1
Yes

*/

#include <stdio.h>
int main (void)
{
	float a, b, c, d, e, sum;

	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	printf("Enter the third number: ");
	scanf("%f", &c);
	printf("Enter the fourth number: ");
	scanf("%f", &d);
	printf("Enter the fifth number: ");
	scanf("%f", &e);
	printf("%.1f %.1f %.1f %.1f %.1f", a, b, c, d, e);

	sum = a + b + c + d;

	if(sum > e)
	{
		printf("\nYes");
	}

	return 0;
}
