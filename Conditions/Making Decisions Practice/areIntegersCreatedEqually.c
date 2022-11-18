/*
 *
 1. Are Integers Created Equally?

by CodeChum Admin

It's time to find out if something is true or false. Let's test your capabilities by creating a program that checks if two integers are equal!


Instructions:

    Input two integers in one line.
    Print the two integers in one line, and separate them with a space.
    Print a string message "Equal" on a new line, if both inputted integers are equal.

Input

1. First integer

2. Second integer

Output

The first two lines will contain message prompts to input the two integers.
The next line will contain the inputted integers.
The last line will contain a string which is the result, if the condition were true.

Enter·the·first·integer:·5
Enter·the·second·integer:·5
5·5
Equal

*/

#include<stdio.h>
int main(void)
{
	int a, b;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("%d %d", a, b);

	if(a == b) 
	{
		printf("\nEqual");
	}
	return 0;
}
