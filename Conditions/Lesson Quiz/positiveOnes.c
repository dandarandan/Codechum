/*
 * 2. The Positive Ones

by CodeChum Admin

There are different kinds of numbers, but among them all, the most commonly used numbers in our daily lives are those positive ones. So, I only want you to count all the positive numbers from the 4 outputted values and print out the result.


Go and search for the positive ones among these four!

Input

1. First number

2. Second number

3. Third number

4. Fourth number

Output

The first four lines will contain message prompts to input the four numbers.
The last line contains the total count of all the positive numbers.

Enter·the·first·number:·2
Enter·the·second·number:·-4
Enter·the·third·number:·3.6
Enter·the·fourth·number:·1
Count·of·positives·=·3

*/

#include <stdio.h>
int main (void)
{
	double a[4];
	int count = 0;

	printf("Enter the first number: ");
	scanf("%lf", &a[0]);
	printf("Enter the second number: ");
	scanf("%lf", &a[1]);
	printf("Enter the third number: ");
	scanf("%lf", &a[2]);
	printf("Enter the fourth number: ");
	scanf("%lf", &a[3]);

	for (int i = 0; i < 4; i++)
	{
		if (a[i] >= 0)
		{
			count+=1;
		}
	}

	printf("Count of positives = %d", count);

	return 0;
}
