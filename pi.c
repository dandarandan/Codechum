/*
Instructions:

1. Print out the value of Pi with just once decimal using placeholders. Remember the syntax used when using placeholders in a printf() function.
2. Make use of the float placeholder in your printf() function to output the value of Pi. Take note, however, that we only wish to output one decimal of the entire value of Pi,
so recall on how to limit the outputted decimals in your code.
3. The outputted statement must be the same as the one in the sample output shown below.

Expected Output:
Pi·=·3.1
*/

#include<stdio.h>

int main(void) {

    printf("Pi = %.1f", 3.1415926);

    return 0;
}