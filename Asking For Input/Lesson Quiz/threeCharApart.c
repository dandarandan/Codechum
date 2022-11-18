/*
 * 5. Three Char Apart

by CodeChum Admin

Do you like reading books? If you do, then you must have encountered texts that have quite a wide space with dots in between them, just like pausing or thinking before proceeding the narration. Let’s try doing that here in C, shall we?

Input

1. First character

2. Second character

Output

The first line will contain a message prompt to input the first character.
The second line will contain a message prompt to input the second character.
The succeeding lines contain the 2 characters separated by dots.

Enter·the·first·character:·C
Enter·the·second·character:·U
C
.
.
.
U
*/

#include<stdio.h>
int main(void)
{
	char a, b;

	printf("Enter the first character: ");
	scanf(" %c", &a);
	printf("Enter the second character: ");
	scanf(" %c", &b);

	printf("%c\n.\n.\n.\n%c", a, b);
	
	return 0;
}
