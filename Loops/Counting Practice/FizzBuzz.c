/*1. FizzBuzz

by CodeChum Admin

Let’s play a game of FizzBuzz! It’s quite the same with your childhood "PopCorn" game, but with a little bit of twist to align it with programming.


Are you ready?


Instructions:

    Input a positive integer in one line. This will serve as the ending point of your loop.
    Loop from 1 to the ending point (inclusive) and perform the following statements:
        If the number is only divisible by 3, print "Fizz"
        If the number is only divisible by 5, print "Buzz"
        If the number is divisible by both 3 and 5, print "FizzBuzz"
        If nothing is true in the previous conditions, skip the number

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The succeeding lines contain strings.

Enter·n:·15
Fizz
Buzz
Fizz
Fizz
Buzz
Fizz
FizzBuzz*/

#include <stdio.h>
int main (void) {

    int counter, number;

    printf("Enter n: ");
    scanf("%d", &number);

    for (counter = 1; counter <= number; counter++)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
        {
            printf("FizzBuzz\n");
        } else if (counter % 5 == 0)
        {
            printf("Buzz\n");
        } else if (counter % 3 == 0)
        {
            printf("Fizz\n");
        }
    }
}