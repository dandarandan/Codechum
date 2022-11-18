/*
 * 4. Decimal x Decimal

by CodeChum Admin

Now that we're done with integers, we're moving on to decimals!


Instructions:

    Input three decimal numbers in one line separated by spaces, and make sure to store them in different variables.
    Multiply the 1st and 2nd decimal numbers, and store the product into a variable.
    Then, divide the product of the 1st and 2nd decimal numbers with the 3rd decimal number, then print out its quotient.

Input

1. First decimal number

2. Second decimal number

3. Third decimal number

Output

The first three lines will contain message prompts to input the three decimal numbers.
The last line contains the result in two decimal places.

Enter·the·first·number:·1.53
Enter·the·second·number:·2.25
Enter·the·third·number:·1.23
Result·=·2.80
*/

#include<stdio.h>
int main(void)
{
	double dec1, dec2, dec3;

	printf("Enter the first number: ");
	scanf("%lf", &dec1);
	printf("Enter the second number: ");
	scanf("%lf", &dec2);
	printf("Enter the third number: ");
	scanf("%lf", &dec3);

	double product = dec1 * dec2;

	printf("Result = %.2lf", product / dec3);
	
	return 0;
}


