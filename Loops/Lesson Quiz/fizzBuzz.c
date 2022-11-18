/*1. FizzBuzz 2.0

by CodeChum Admin

Remember the game of FizzBuzz from the last time? Well, I thought of some changes in the game, and also with the help of loops as well. Firstly, you'll be asking for a random integer and then loop from 1 until that integer. Then, implement these conditions in the game:

    print "Fizz" if the number is divisible by 3
    print "Buzz" if the number is divisible by 5
    print "FizzBuzz" if the number is divisible by both 3 and 5
    print the number itself if none of the above conditions are met

Input

1. An integer

Output

The first line will contain a message prompt to input the integer.
The succeeding lines will contain either a string or an integer.

Enter·n:·15
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz

*/

#include <stdio.h>
int main (void) {

	int num;

	printf("Enter n: ");
	scanf("%d", &num);

	for (int count = 1; count <= num; count++) {
		if (count % 5  == 0 && count % 3 == 0){
			printf("FizzBuzz\n");
		} else if (count % 5 == 0) {
			printf("Buzz\n");
		} else if (count % 3 == 0) {
			printf("Fizz\n");
		} else {
			printf("%d\n", count);
		}
	}
	return 0;
}

