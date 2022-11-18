/* 3. Input + Addition

by CodeChum Admin

Hopefully you haven't forgotten about your previous lesson, because you're going to need it for this one.


Instructions:

    Input two integers (one per line) and make sure to store them in variables.
    Add the two integers and print out their sum!

Input

1. First integer

2. Second integer

Output

The first line will contain a message prompt to input the first integer.
The second line will contain a message prompt to input the second integer.
The last line contains the sum of the two inputted integers.

Enter·the·first·integer:·6
Enter·the·second·integer:·7
Sum·=·13
*/

#include<stdio.h>
int main(void)
{
	int a, b;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);

	printf("Sum = %d", a + b);

	return 0;
}
