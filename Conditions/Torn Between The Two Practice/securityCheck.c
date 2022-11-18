/*
 * 3. Security Check

by CodeChum Admin

Woah there, what are you doing roaming around past the curfew? I'm going to have to ask for some identification.


Instructions:

    Input an integer. This will represent your age.
    If the inputted age is greater than or equal to 18, print out "Adult". Otherwise, print "Minor".

Input

1. The age

Output

The first line will contain a message prompt to input the age.
The second line contains either "Adult" or "Minor"

Enter·the·age:·20
Adult
*/

#include <stdio.h>
int main (void)
{
	int age;

	printf("Enter the age: ");
	scanf("%d", &age);

	if(age >= 18)
	{
		printf("Adult");
	}
	else
	{
		printf("Minor");
	}

	return 0;
}
