/*1. One and One

by CodeChum Admin

Now let’s start with something simple! Make a program that accepts a single character and an integer and print it out afterwards.


Think you can do it?


Instructions:

    Input one character and one integer. Make sure that they are typed on different lines.
    Print out the inputted character and integer in one line, separated by a space. You may look at the sample output for your reference.

Input

1. The character input

2. The integer input

Output

The first line will contain a message prompt to input the character.
The second line will contain a message prompt to input the integer.
The last line contains the character and the integer beside each other.

Enter·the·character:·C
Enter·the·integer:·4
C·4
*/

#include <stdio.h>
int main(void)
{
	char a;
	int num;

	printf("Enter the character: ");
	scanf(" %c", &a);
	printf("Enter the integer: ");
	scanf("%d", &num);

	printf("%c %d", a, num);

	return 0;
}
