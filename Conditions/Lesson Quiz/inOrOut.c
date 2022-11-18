/*
 * 3. In or Out

by CodeChum Admin

I'm quite into games now, so how about we play In or Out! When a given number is even, the team scores so we shall print "In", but if it's not an even number, then we print "Out". Simple, right?


Now let's get this game started.

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the appropriate string.

Enter·n:·35
Out

*/

#include <stdio.h>
int main (void)
{
	int a;

	printf("Enter n: ");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("In");
	}
	else
	{
		printf("Out");
	}

	return 0;
}
