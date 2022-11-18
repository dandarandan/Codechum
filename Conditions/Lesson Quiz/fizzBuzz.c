/*
 * 7. The FizzBuzz Game

by CodeChum Admin

Let's play a game of FizzBuzz! It works just like the popular childhood game "PopCorn", but with rules of math applied since math is fun, right?


Just print out "Fizz" when the given number is divisible by 3, "Buzz" when it's divisible by 5, and "FizzBuzz" when it's divisible by both 3 and 5!


Let the game begin!

Input

1. An integer

Constraints

It is guaranteed that the input is either divisible by 3, 5, or by both.

Output

The first line will contain a message prompt to input the integer.
The second line contains the appropriate string.

Enter·n:·15
FizzBuzz

*/

#include <stdio.h>
int main (void)
{
	int a;

	printf("Enter n: ");
	scanf("%d", &a);

	if (a % 3 == 0)
	{
		if (a % 5 == 0)
		{
			printf("FizzBuzz");
		} else {
		printf("Fizz");
		}
	} else {
		printf("Buzz");
	}

	return 0;
}
