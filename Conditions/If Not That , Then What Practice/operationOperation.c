/*
 * 4. Operation: Operation

by CodeChum Admin

You have been cordially invited to partake in Operation: Operation. Your mission, should you choose to accept it, is to take the two numbers and the operator given then perform the operation successfully.


Instructions:

    Input one number (integer or decimal), an operator (+, -, *, /), and another number (integer or decimal). Again, since we're scanning a character, don't forget to add a space before the character's placeholder like this, " %c", so that it won't be the newline character that will be scanned for the operator.
    Print the result of the operation between the two numbers, up to 2 decimal places.

Input

1. First number

2. Operator

3. Second number

Output

The first line will contain a message prompt to input the first number.
The second line will contain a message prompt to input the operator.
The third line will contain a message prompt to input the second number.
The last line contains the result with 2 decimal places.

Enter·the·first·number:·5
Select·the·operator·(+,·-,·*,·/):·+
Enter·the·second·number:·0.70
Result·=·5.70

*/

#include <stdio.h>
int main (void)
{
	double a, b;
	char operation;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Select the operator (+, -, *, /): ");
	scanf(" %c", &operation);
	printf("Enter the second number: ");
	scanf("%lf", &b);

	if (operation == '+')
	{
		printf("Result = %.2lf", a + b);
	}
	else if (operation == '-')
	{
		printf("Result = %.2lf", a - b);
	}
	else if (operation == '*')
	{
		printf("Result = %.2lf", a * b);
	}
	else
	{
		printf("Result = %.2lf", a / b);
	}

	return 0;
}
