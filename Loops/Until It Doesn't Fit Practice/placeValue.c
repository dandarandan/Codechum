/*Tip #1: Use % 10 to get the rightmost digit. For example, if you do 412 % 10, then the result would be the rightmost digit, which is 2.
Tip #2: On the other hand, use / 10 to remove the rightmost digit. For example, if you do 412 / 10, then the result would be 41.
Tip #3: You'd have to repeat Tip #1 and Tip #2 inside the while() loop for this problem while the inputted integer is not yet 0.*/



//123

#include <stdio.h>
int main (void) {

    int number, container;

    printf("Enter n: ");
    scanf("%d", &number);

    while (number >= 10)
    {
        container = number % 10;
        printf("%d\n", container);
        number /= 10;
    }
    printf("%d", number);
}