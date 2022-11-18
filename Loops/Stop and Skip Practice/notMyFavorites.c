/*2. Not my Favorites

by CodeChum Admin

We've already done looping through a series of numbers and printing out its squares, so how about we level it up and go with cubes this time?


I have a condition though; I don't want to be associated with numbers that are divisible by 3 or 5 so if an integer is divisible by either of the two, don't make their cube values appear on the screen, please.


Care to fulfill my request?


Instructions:

    Print out the cube values of the numbers ranging from 1 to 1000 (inclusive). However, if the number is divisible by either 3 or 5, do not include them in printing and proceed with the next numbers.
    Tip: When skipping through special values, make use of the keyword continue and put them inside a conditional statement.

Output

Multiple lines containing an integer.

1
8
64
343
512
.
.

*/

#include<stdio.h>
int main (void) {
	
	int cube;

	for (int count = 1; count <= 1000; count++) {
		if (count % 5 == 0 || count % 3 == 0) {
			continue;
		} else {
			cube = count * count * count;
			printf("%d\n", cube);
		}
	}

	return 0;
}
