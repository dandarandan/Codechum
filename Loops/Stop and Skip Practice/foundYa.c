/*1. Found Ya!

by CodeChum Admin

Let's now try finding a certain digit into an integer! Come and join in on the fun and code with me!


Instructions:

    Input two integers in one single line. The first inputted integer must be within 0-9 only.
    Using loops, identify if the first inputted integer (0-9) is present in the second inputted integer. If it is found, print "Yes". Otherwise, print "No".
    Tip #1: If the number is already found even without reaching the end of the loop, use the break keyword to exit the loop early for a more efficient code.
    Tip #2: Create a "flag" variable outside the loop. A flag variable will be like a light switch which will only have two states: on and off. Hence, it will just be an integer variable which you, the programmer, will make sure that it will only hold two values: 0 and 1. 0 will represent false while 1 will represent true. In this problem, this flag variable will track if we have found the digit inside the other inputted integer. Hence, initially set this to 0 because before you make the loop, you haven't found yet the digit. Once you've found the digit, just right before you break, set this to 1.
    Tip #3: Use the flag variable in Tip #2 after the loop to check if the digit was found or not.

Input

1. The digit to be found

2. The integer to be searched

Output

The first line will contain a message prompt to input the digit to be found.
The second line will contain a message prompt to input the integer.
The last line contains the appropriate string.

Enter·the·digit·(0·-·9):·1
Enter·the·integer:·231214238
Yes*/

#include <stdio.h>
int main (void) {

    int digit, integer, intCheck, intValue, output = 0;

    printf("Enter the digit (0 - 9): ");
    scanf("%d", &digit);
    printf("Enter the integer: ");
    scanf("%d", &integer);

    intValue = integer; //so integer keeps looping and not gets updated by the modulo operator

    for (int count = 0; count <= integer; count++)
    {

        intCheck = intValue % 10; //getting the rightmost value and comparing it to the entered variable

        if (digit == intCheck)
        {

            output = 1;
            break;
        }
        intValue /= 10;

        }


    if (output == 1)
    {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}