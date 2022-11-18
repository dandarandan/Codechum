/*2. Factorials

by CodeChum Admin

For those of you who may not now, a factorial is a product of multiplying from 1 until the number. Now, you must make a program that will accept an integer and then print out its factorial using loops.

Are you up for this task?


Instructions:

    Input a positive integer.
    Using a for() loop, generate the factorial value of the integer and print out the result.
    Tip #1: Factorials work like this: Factorial of 5 = 1 * 2 * 3 * 4 * 5
    Tip #2: There's a special case in factorials. The factorial of 0 is 1.

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the factorial of that integer.

Enter·n:·5
Factorial·of·5·=·120*/

#include <stdio.h>
int main (void) {

    int number, result = 1;

    printf("Enter n: ");
    scanf("%d", &number);

    for (int counter = 1; counter <= number; counter++)
    {
        result*=counter;
    }

    printf("Factorial of %d = %d", number, result);

}