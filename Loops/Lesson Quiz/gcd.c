/*6. The GCD

by CodeChum Admin

The greatest common divisor, also known as GCD, is the greatest number that will, without a remainder, fully divide a pair of integers.


Now, I want you to make a program that will accept two integers and with the use of loops, print out their GCD. Make good use of conditional statements as well.


Off you go!

Input

1. First integer

2. Second integer

Output

The first line will contain a message prompt to input the first integer.
The second line will contain a message prompt to input the second integer.
The last line contains the GCD of the two integers.

Enter·the·first·integer:·6
Enter·the·second·integer:·9
GCD·of·6·and·9·is·3

*/

#include<stdio.h>
int main (void) {
	
	int first = 0, second = 0, product = -1, count = 2, lcm = 0, countProduct = 0;

	printf("Enter the first integer: ");
	scanf("%d", &first);
	printf("Enter the second integer: ");
	scanf("%d", &second);

	

	if (first % second == 0) {
		lcm = first;
		product = 0;
	}

	if (second % first == 0) {
		lcm = second;
		product = 0;
	}	

	while (product % first != 0 && product % second != 0){ 

		if (first > second) 
		{
			countProduct = first * count;
			count++;
			if (countProduct % first == 0  && countProduct % second == 0)
			{
				lcm = countProduct;
				product = lcm;
			}
		} else 
		{
			countProduct = second * count;
			count++;
			if (countProduct % first == 0 && countProduct % second  == 0) 
			{
			lcm = countProduct;
				product = lcm;
			}
		}
	}
	printf("GCD of %d and %d is %d\n", first, second, first*second / lcm);

	return 0;
}
