/*5. Even Out

by CodeChum Admin

You know, I was lying when I said the last time that numbers associated with 3 are my favorite, because the one I actually like the most in the world are even numbers! But to make things harder for you, you have to pick the even numbers from a range of two given numbers. Ha!

Now, let's try this one more time! 


Instructions:

    Input two integers in one line, separated by a space. The first integer shall represent the starting point, and the other, the ending point.
    Print out all even numbers that are within the range of the starting and ending point (inclusive or including the ending point).

Input

1. The starting point

2. The ending point

Output

The first line will contain a message prompt to input the starting point.
The second line will contain a message prompt to input the ending point.
The last line contains the integers within the range.

Enter·the·starting·point:·5
Enter·the·ending·point:·10
6·8·10*/

#include <stdio.h>
int main(void) {

    int num[2];

    printf("Enter the starting point: ");
    scanf("%d", &num[0]);
    printf("Enter the ending point: ");
    scanf("%d", &num[1]);

    for (num[0]; num[0] <= num[1]; num[0]++)
    {
        if (num[0] % 2 == 0)
        {
            printf("%d ", num[0]);
        }

    }

    return 0;
}