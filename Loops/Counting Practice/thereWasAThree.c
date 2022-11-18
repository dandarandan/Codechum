/*3. There was a Three

by CodeChum Admin

I'm bored with just basic counting. How about we do some complex things this time? But I don't want to be associated with any number that's not divisible by 3.

Think you can handle this?


Instructions:

    Print out all numbers from 1 to 100 that is divisible by 3, each in separate lines, using a for() loop.

Output

Multiple lines containing an integer that is divisible by 3.

3
6
9
12
15
18
21
.
.
.*/

#include <stdio.h>
int main (void) {

    for (int counter = 3; counter <= 100; counter+=3)
    {
        printf("%d\n", counter);
    }
}