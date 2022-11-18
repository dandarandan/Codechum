/*5. "Even" Now

by CodeChum Admin

I'm really fond of even numbers, you know? That's why I'll be letting you make another even number problem yet again. This time, you need to print from a range of two inputted numbers, n1 and n2 (inclusive), all the even numbers from n2 down to n1, in descending order.


How about that?

Input

1. Value of n1

2. Value of n2

Output

The first line will contain a message prompt to input the value of n1.
The second line will contain a message prompt to input the value of n2.
The succeeding lines contain an integer.

Enter·n1:·3
Enter·n2:·10
10
8
6
4
*/

#include <stdio.h>
int main (void) {

	int num[2] = {0, 0};

	printf("Enter n1: ");
	scanf("%d", &num[0]);
	printf("Enter n2: ");
	scanf("%d", &num[1]);

	for (int count = num[1]; count >= num[0]; count--) {
		if (count % 2 == 0) {
			printf("%d\n", count);
		}
	}
	return 0;

}

