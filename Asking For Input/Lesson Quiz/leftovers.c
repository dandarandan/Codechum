/* 
 * 3. Leftovers

by CodeChum Admin

We Filipinos are quite known for the habit of leaving at least one of the many pieces of food on the plate as it can't be equally divided among all at most times. Just like when 3 people decide to eat a pizza of 10 slices, there will often be at least one slice left on the box. To accurately show just how many pieces of things are left when divided by a certain number, we code it using modulo.

Care to do it for me?

Input

1. First integer

2. Second integer

Output

The first line will contain a message prompt to input the first integer.
The second line will contain a message prompt to input the second integer.
The last line contains the remainder.

Enter·the·first·integer:·10
Enter·the·second·integer:·3
Remainder·=·1
*/

#include<stdio.h>
int main(void)
{

	int a, b;

	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);

	printf("Remainder = %d", a % b);

	return 0;
}
