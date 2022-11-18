/*1. Squares

by CodeChum Admin

Looping random numbers and manipulating those values are fun, too! Why don't we try one that returns the square of an inputted number repeatedly until the user inputs 0? Let's do this!


Instructions:

    Using a do...while() loop, continuously scan for random integers that will be inputted by the user and print out its square, separated in each line.
    Once the inputted value is 0, it will still print out its square value but should then terminate the loop afterward. Use this concept in making your loop condition.

Input

1. Series of integers

Output

Multiple lines containing message prompts for integers and their squares.

Enter·n:·2
Square·=·4

Enter·n:·6
Square·=·36

Enter·n:·0
Square·=·0*/

#include <stdio.h>
int main (void) {

    int num, result = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &num);
        result = num * num;
        printf("Square = %d\n\n", result);
    } while (result != 0);
}