/* 
 *4. Power Trio

by CodeChum Admin

Multiplying two numbers is a piece of cake, but how about multiplying three of them, either being a negative of positive number? With programming and proper code, these tasks are easy to handle.


You're a programmer, right? Then code this one for me!

Input

1. First number

2. Second number

3. Third number

Output

The first three lines will contain message prompts to input the three numbers.
The last line contains the product of the three numbers with 1 decimal place.

Enter·the·first·number:·1.6
Enter·the·second·number:·-2
Enter·the·third·number:·-1
Product·=·3.2
*/

#include<stdio.h>
int main(void)
{
	double a, b, c;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("Enter the third number: ");
	scanf("%lf", &c);

	printf("Product = %.1lf", a * b * c);

	return 0;
}
