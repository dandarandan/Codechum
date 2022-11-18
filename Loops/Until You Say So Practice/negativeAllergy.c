/*3. Negative Allergy

by CodeChum Admin

Whole numbers are great, but I think we should also pay attention to decimal numbers, too.


So, how about we make a program that involves a lot of decimals?


Instructions:

    Continuously ask for floating point values (decimal numbers) using the do…while() loop, sum them all up, and store the total into one variable.
    The loop shall only terminate for the following reasons:
        A negative decimal number is inputted (but still included in the total sum)
        The total sum reaches 100.0 or more

Input

1. A series of float numbers

Output

The first multiple lines containing message prompts for float numbers.
The last line contains the sum with 2 decimal places.

Enter·a·number:·1.1
Enter·a·number:·1.2
Enter·a·number:·1.3
Enter·a·number:·1.4
Enter·a·number:·-1.0
Sum·=·4.00*/

#include <stdio.h>
int main (void) {

    double number, result;

    do  {
        printf("Enter a number: ");
        scanf("%lf", &number);
        result+=number;
    } while (number > 0 && result < 100);

    printf("Sum = %.2lf", result);

    return 0;

}