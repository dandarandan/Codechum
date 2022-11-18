/*
 * 7. Square Root

by CodeChum Admin

You've learned in the past lessons on how to use square root functions, right? Then let's take your knowledge to the test. Print out the square root of a given integer with only two decimal places.


Ready, solve, and go!

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line will contain the square root of that integer with 2 decimal places.

Enter·n:·4
Square·root·of·4·=·2.00

*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int num;

	printf("Enter n: ");
	scanf("%d", &num);

	printf("Square root of %d = %.2lf", num, sqrt(num));

	return 0;
}
