/*4. Not Less than Three

by CodeChum Admin

Make a program that will accept an integer and loop from 1 to that integer. Then, print all numbers from that range that are greater than 3.


Let's go!

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The succeeding lines contain an integer.

Enter·n:·8
4
5
6
7
8

*/

#include <stdio.h>
int main (void) {

	int number;

	printf("Enter n: ");
	scanf("%d", &number);

	for (int count = 1; count <= number; count++) {
		if (count > 3) {
			printf("%d\n", count);
		}
	}
}
