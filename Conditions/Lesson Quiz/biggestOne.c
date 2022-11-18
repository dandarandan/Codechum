/*
 * 1. Where's the Biggest One?

by CodeChum Admin

We've already tried comparing 3 numbers to see the largest among all, so let's try a more complicated mission where we locate the position of the largest among 5 numbers. There are only 4 possible cases for this mission:

- if the largest digit is the first digit, print "Leftmost"

- if the largest digit is the third digit, print "Middle"

- if the largest digit is the last digit, print "Rightmost"

- if none of the above is correct, print "Unknown"



Now, show me how far you've understood your lessons!

Input

1. First integer

2. Second integer

3. Third integer

4. Fourth integer

5. Fifth integer

Output

The first five lines will contain message prompts to input the five integers.
The last line contains the appropriate string.

Enter·integer·1:·1
Enter·integer·2:·4
Enter·integer·3:·6
Enter·integer·4:·3
Enter·integer·5:·2
Middle

*/

#include <stdio.h>
int main (void)
{
	int num[5];

	for (int i = 1; i <= 5; i++)
	{
		printf("Enter integer %d: ", i);
		scanf("%d", &num[i - 1]);
	}

	if (num[0] > num[2] && num[0] > num[4])
	{
		printf("Leftmost");
	}
	else if (num[2] > num[0] && num[2] > num[4])
	{
		printf("Middle");
	}
	else if (num[4] > num[2] && num[4] > num[0])
	{
		printf("Rightmost");
	}
	else
	{
		printf("Unknown");
	}

	return 0;
}

