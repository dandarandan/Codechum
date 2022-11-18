/*
 * 1. Visibly Divisible

by CodeChum Admin

Do you still know what being divisible by a certain number means? In case you forgot, being divisible means that the number is capable of being divided by another number without a remainder. With this knowledge, you can surely solve this problem!


Instructions:

    Input one integer.
    Make a conditional statement that contains the following conditions:
        If the integer is only divisible by 3, print "Divisible by 3"
        If the integer is only divisible by 4, print "Divisible by 4"
        If the integer is divisible by both 3 and 4, print "Divisible by 3 and 4"

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the appropriate message.

Enter·n:·6
Divisible·by·3

*/

#include <stdio.h>
int main (void)
{
	int a;

	printf("Enter n: ");
	scanf("%d", &a);

	if (a % 3 == 0 && a % 4 == 0)
	{
		printf("Divisible by 3 and 4");
	}
	else if( a % 4 == 0)
	{
		printf("Divisible by 4");
	}
	else
	{
		printf("Divisible by 3");
	}
	
	return 0;
}
