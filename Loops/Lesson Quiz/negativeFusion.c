/*3. Negative Fusion

by CodeChum Admin

As I've said before, there are three types of numbers: the positive, the zero, and the negative ones. Today, we shall pay attention only to the negative ones now. Make a loop that will accept random decimal/float numbers. When the user inputs 0, the loop will terminate and then output the sum of all negative numbers inputted in 3 decimal places.


Let's code this.

Input

1. A series of decimal numbers

Output

The first lines will contain message prompts to input the decimal numbers.
The last line contains the sum of all negative numbers with 3 decimal places.

Enter·a·number:·2.4434
Enter·a·number:·-1.3433
Enter·a·number:·-2.444
Enter·a·number:·6.432
Enter·a·number:·0
Sum·of·all·negatives·=·-3.787

*/

#include <stdio.h>
int main(void) {

	double number = 0, result = 0;

	do {
	printf("Enter n: ");
	scanf("%lf", &number);
	if (number < 0) {
		result += number;
	} else {
		continue;
	}
	}while (number != 0);

	printf("Sum of negatives = %.lf", result);

	return 0;
}
