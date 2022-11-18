/*5. Counting Num

by CodeChum Admin

To give you more of a challenge with a number's digits, let's try counting how many of a certain digit is present on a given number.


Let's start coding!


Instructions:

    Input two integer values. The first one shall accept any integer from 0-9 and the other one shall take a non-zero positive integer.
    Using a while loop, count how many of the first integer (0-9) is present in the digits of the second inputted integer and print the result (see sample input and output for example).
    Tip #1: You have to use your knowledge from the previous problems in looping through the digits of a number: % 10 to get the rightmost digit, while / 10 to remove the rightmost digit. Make sure to solve the previous problems first.

Input

1. First integer

2. Second integer

Output

The first line will contain a message prompt to input the first integer.
The second line will contain a message prompt to input the second integer.
The last line contains the number of times the first integer occurred in the digits of the second integer.

Enter·the·first·integer·(0·-·9):·2
Enter·the·second·integer:·124218
Occurrences·=·2-*/

#include <stdio.h>
int main (void) {

    int num[2], occurenceCount = 0, valueCheck, variableHolder;

    printf("Enter the first integer (0 - 9): ");
    scanf("%d", &num[0]);
    printf("Enter the second integer: ");
    scanf("%d", &num[1]);

    while (num[1] > 0)
    {
        variableHolder = num[1] % 10;

        if (variableHolder == num[0])
        {
            occurenceCount++;
        }
        num[1] /= 10;

    }

    printf("Occurrences = %d", occurenceCount);
}