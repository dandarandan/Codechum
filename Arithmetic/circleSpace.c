/*6. Circle Space

by CodeChum Admin

Let's do some more math and understand the concept of the order of precedence by solving for the area of the circle! It's quite simple: you just have to recreate the expression Area = πr2 using C code.


Instructions:

    The approximate value of Pi and the length of the radius are already provided for you in the code editor. Recreate the formula for the area of a circle using those values and assign it to a variable.
    Print the value of the newly-created variable using the printf() function. We recommend you try tracing which of the operations are done in order to understand how C precedence works and see if the result printed is the same as the answer you get from manual calculation.

Output

A single line containing a decimal with two decimal places.

12.56

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int radius = 2;
	float pi = 3.14;
	float area = pi * pow(radius, 2);

	printf("%.2f", area);

	return 0;
}
