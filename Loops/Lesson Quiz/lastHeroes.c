/*2. The Last 'Zeroes'

by CodeChum Admin

How many zeroes are there after the last non-zero digit of a million? a trillion? To easily identify that, let us make a program to count and print the number of zeroes after the last non-zero digit of a number. For example, in 20400, there are 2 zeroes after the last non-zero digit of the number, 4.


Are you up for this challenge?

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The second line contains the number of zeroes.

Enter·n:·20400
Last·zeroes·count·=·2*/

#include <stdio.h>
int main(void) {

	int num, temp, zeroCount = 0;

	printf("Enter n: ");
	scanf("%d", &num);

	for (int count = 0; count <= num; count++) {

		temp = num % 10;
		if (temp == 0) {
			zeroCount++;
		} else {
			break;
		}
		num /= 10;
	}

	printf("Last zeroes count = %d", zeroCount);

	return 0;
}


