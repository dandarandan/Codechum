/*
 * 6. Jackpot!

by CodeChum Admin

Did you know that in lotteries, a 3-digit number with the same numbers in all digits like 777 will hit the jackpot in a casino? In the same manner, let's make a program that will test if a certain 3-digit number hits a jackpot or not by identifying if all the digits of a given number is the same as the second inputted number. If it is, print "Jackpot!"; else, print "Nah".


Let's try this out now!

Input

1. 3-digit number

2. Digit to be checked

Output

The first line will contain a message prompt to input the 3-digit integer.
The second line will contain a message prompt to input the digit to be checked.
The last line contains the appropriate string.

Enter·the·3-digit·integer:·777
Enter·the·digit·to·be·searched·(0·-·9):·7
Jackpot!

*/

#include <stdio.h>
int main (void)
{
	int a, b, z, x;

	printf("Enter the 3-digit integer: ");
	scanf("%d", &a);
	printf("Enter the digit to be searched (0 - 9): ");
	scanf("%d", &b);

	z = a % 10;
	a/=10;
	x = a % 10;
	a/=10;
	
	if (z == b && x == b && a == b)
	{
		printf("Jackpot!");
	} else {
		printf("Nah");
	}

	return 0;
}
