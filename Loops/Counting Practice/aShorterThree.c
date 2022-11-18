/*4. A Shorter Three

by CodeChum Admin

Numbers in threes are awesome! But the one last time was too lengthy to look at, so I just want to view it in a shorter but still readable format.


You okay with this task?


Instructions:

    Print out all numbers from 1 to 100 that is divisible by 3 using a for loop just like the last problem, but this time, with each number only separated by the space like that of the sample output.

Output

A single line containing integers divisible by 3 separated by a space.

3·6·9·12·15·18·21·24...*/

#include <stdio.h>
int main (void) {

    for (int counter = 3; counter <= 100; counter+=3)
    {
        printf("%d ", counter);
    }
    return 0;
}