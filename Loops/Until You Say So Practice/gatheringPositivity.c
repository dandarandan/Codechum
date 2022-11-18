/*4. Gathering Positivity

by CodeChum Admin

I always want to look at the positive side of things, so I decide to seriously look at positive numbers, too!


Will you code along with me?


Instructions:

    Using the do…while() loop, continuously scan for integers, but add up only all the positive integers and store the total in one variable.
    The loop shall only be terminated when the inputted integer is zero. Afterwards, print out the total of all inputted positive integers.

Input

1. A series of integers

Output

The first multiple lines will contain message prompts to input the integers.
The last line contains the total of all positive integers inputted.

Enter·n:·2
Enter·n:·3
Enter·n:·4
Enter·n:·-1
Enter·n:·-5
Enter·n:·1
Enter·n:·0
Total·of·all·positives·=·10*/

#include <stdio.h>
int main (void) {

    int number, result = 0;

    do {
        printf("Enter n: ");
        scanf("%d", &number);
        if (number >0)
        {
            result+=number;
        }
    } while (number != 0);

    printf("Total of all positives = %d", result);
    return 0;
}
