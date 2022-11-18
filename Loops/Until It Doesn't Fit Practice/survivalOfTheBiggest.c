/*4. Survival of the Biggest

by CodeChum Admin

Looping a number and taking away each digit of it is so much fun, but I wanted to try out a much more complex task: getting the largest digit among them all.

Think you can handle the job?


Instructions:

    Input a non-zero positive integer.
    Using the same concept as the previous problem, figure out how to separate the digits of a number and determine which of the digits is the largest one, using a while. Afterwards, print the largest digit.
    Tip #1: Create another variable that will hold the largest digit. Initial its value to a negative integer, like -1, outside the loop.
    Tip #2: Everytime you get the rightmost digit, check if it is greater than the current largest digit. If it is, set it as the new largest digit.

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the largest digit of the integer.

Enter·n:·214
Largest·digit·=·4*/


#include <stdio.h>
int main (void) {

    int number, largestDigit = 0, container = 0;

    printf("Enter n: ");
    scanf("%d", &number);


    while (number > 0)
    {
        largestDigit = number % 10;

        if (largestDigit > container)
        {
            container = largestDigit;
        }
        number /= 10;
    }
    printf("Largest digit = %d", container);

    return 0;
}
