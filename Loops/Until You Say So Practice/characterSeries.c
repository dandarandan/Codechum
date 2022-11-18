/*2. A, e, i, o, u?

by CodeChum Admin

We've had enough about numbers, so why don’t we try evaluating characters now?

If you know how to identify what the vowel letters are, and you know how to count up to 5, then you’re good to go!


Instructions:

    Using a do…while() loop, continuously scan for characters (one per line) and print it out afterwards. Remember to place a space before the character's placeholder when scanning so that the newline characters will be ignored and the correct values will be scanned.
    The loop shall terminate due to either of the following reasons:
        The inputted character is a vowel
        The number of inputted characters has already reached 5.
    For all of the test cases, it is guaranteed that if the number of inputted characters is less than 5, then there must be a vowel from among the inputted characters. Also, it is guaranteed that all the characters are in lowercase.

Input

1. A series of characters

Output

Multiple lines containing message prompts for characters.

Enter·a·character:·c
c

Enter·a·character:·f
f

Enter·a·character:·a
a*/


#include <stdio.h>
int main (void) {

    char letter;
    int letterCount = 0;
    int vowelCount = 0;

    do  {
        printf("Enter a character: ");
        scanf(" %c", &letter);

        if (letter == 'a' || letter == 'A')
        {
            printf("%c\n\n", letter);
            vowelCount++;
        }
        else if (letter == 'e' || letter == 'E')
        {
            printf("%c\n\n", letter);
            vowelCount++;
        } else if (letter == 'i' || letter == 'I')
        {
            printf("%c\n\n", letter);
            vowelCount++;
        } else if (letter == 'o' || letter == 'O')
        {
            printf("%c\n\n", letter);
            vowelCount++;
        } else if (letter == 'u' || letter == 'U')
        {
            printf("%c\n\n", letter);
            vowelCount++;
        } else  {
            printf("%c\n\n", letter);
            letterCount++;

        }

    } while (vowelCount == 0 && letterCount < 5);
}