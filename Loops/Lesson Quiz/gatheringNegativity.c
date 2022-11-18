/*7. Gathering Negativity

by CodeChum Admin

I’ve been too positive in life, but I figured that it really isn’t good to always be positive since life has to be balanced, don’t you think so?


That aside, let’s make a program that asks for random integers, positive or negative, and sums up all the negative integers only! Well, the loop stops when the inputted value is 0, though.


And don’t forget to print the sum of negative integers afterwards! Thanks!

Input

1. A series of integers

Output

Multiple lines containing message prompts to input integers.
The last line contain the sum of the negative integers.

Enter·n:·1
Enter·n:·3
Enter·n:·-1
Enter·n:·-2
Enter·n:·-4
Enter·n:·5
Enter·n:·-1
Enter·n:·-2
Enter·n:·0
Sum·of·negatives·=·-10
*/

#include <stdio.h>
int main (void) {

	int number, result = 0;
	do {
		printf("Enter n: ");
		scanf("%d", &number);
		
		if (number > 0) {
		continue;
		} else {
		result+=number;
		}
	} while ( number != 0);

	printf("Sum of negatives = %d", result);

	return 0;
}
