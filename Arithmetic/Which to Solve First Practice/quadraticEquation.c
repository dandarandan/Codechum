/*5. Quadratic Equation

by CodeChum Admin

How do you actually solve a complex formula having different operations in one mathematical expression?


For you to properly understand which of the operations are to be solved in order, try recreating the quadratic equation, ax^2 + bx + c, in C on your own!


Instructions:

    The value of a, b, c, and x are already provided for you in the code editor. Remake the formula using C's math functions and operators and store it into one variable.
    Print the value of the variable that stores the formula using the printf() function. To understand which to actually solve first in the equation, try tracing it out by yourself and manually solve it by hand and see if your answer match that of the sample output.

Output

A line containing an integer.

16
*/


#include <stdio.h>
#include <math.h>
int main(void)
{
	int a = 2;
	int b = 2;
	int c = 4;
	int x = 2;

	printf("%.0lf", a * pow(x,2) + b * x + c);

	return 0;
}

