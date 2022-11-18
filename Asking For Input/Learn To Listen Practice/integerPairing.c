/*
 * 6. Integer Pairing

by CodeChum Admin

Now this one's a tad bit tricky, but you can definitely do it!


Instructions:

    Input five integers.
    Add the 1st and 2nd integers together and store the sum inside a variable.
    Add the 3rd and 4th integers together and store the sum inside a variable.
    Multiply the two sums and raise the product result to the power of the 5th integer.
    Print out the result.

Input

1. First integer

2. Second integer

3. Third integer

4. Fourth integer

5. Fifth integer

Output

The first five lines will contain message prompts to input the five integers.
The line contains the result.

Enter·integer·1:·2
Enter·integer·2:·3
Enter·integer·3:·3
Enter·integer·4:·5
Enter·integer·5:·4
Result·=·2560000
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[5];
	
	for (int count = 1; count <= 5; count++)
	{
		printf("Enter integer %d: ", count);
		scanf("%d", &a[count-1]);
	}
	int sumA = a[0] + a[1];
	int sumB = a[2] + a[3];

	printf("Result = %d", (int)pow((sumA * sumB), a[4]));

	return 0;
}
