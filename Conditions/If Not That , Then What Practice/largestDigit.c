/*
 * 5. Largest Digit

by CodeChum Admin

This one is a bit tricky. You're going to have to isolate each digit of the integer to determine which one is the largest, so good luck!


Instructions:

    Input a 3-digit integer.
    Print the largest digit in the integer.
    Tip #1: Use % 10 to get the rightmost digit. For example, if you do 412 % 10, then the result would be the rightmost digit, which is 2.
    Tip #2: On the other hand, use / 10 to remove the rightmost digit. For example, if you do 412 / 10, then the result would be 41.
    Tip #3: You'd have to repeat Tip #1 and Tip #2 three times for this problem because the input is a 3-digit integer.

Input

1. A three-digit integer

Output

The first line will contain a message prompt to input the 3-digit integer.
The last line contains the largest digit of the inputted integer.

Enter·a·3-digit·integer:·173
Largest·=·7
*/

#include <stdio.h>
int main (void) {

    int num;
    int container[3];

    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    container[0] = num%10;
    num/=10;
    container[1] = num%10;
    num/=10;
    container[2] = num;

    if (container[0] > container[1] && container[0] > container[2]) {
        printf("Largest = %d", container[0]);
    } else if (container[1] > container[0] && container[1] > container[2]) {
        printf("Largest = %d", container[1]);
    } else {
        printf("Largest = %d", container[2]);
    }

}


