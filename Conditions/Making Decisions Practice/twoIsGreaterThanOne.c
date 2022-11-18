/*
 * 2. Two is Greater Than One

by CodeChum Admin

They say that the one in first place is always greater than the one in the second and third place. Are they always right?


Instructions:

    Input three integers in different lines (one each line).
    Print out all inputted integers in one line, separated by spaces.
    If the 1st integer is greater than or equal to both the 2nd integer and the 3rd integer, print "Yes" on a new line.

Input

1. First integer

2. Second integer

3. Third integer

Output

The first three lines will contain message prompts to input the three integers.
The next line contains the three integers inputted.
The last line contains the string, "Yes", if the condition were true.

Enter·the·first·integer:·3
Enter·the·second·integer:·2
Enter·the·third·integer:·1
3·2·1
Yes

*/

#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("Enter the third integer: ");
	scanf("%d", &c);
	printf("%d %d %d", a, b, c);

	if(a >= b && a >= c)
	{
		printf("\nYes");
	}
	return 0;
}
