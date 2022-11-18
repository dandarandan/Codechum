/*3. Loading…

by CodeChum Admin

I wanna experiment on looping through a range of numbers that will be randomly inputted by the user. However, I don't want to let them see the loading percentage that is divisible by 4, so please exclude those for me when printing it out.

Thank you!


Instructions:

    Input two integers in one line. The first inputted integer will be the starting point, and the second one shall serve as the ending point.
    Use the power of loops to loop through the starting point until the ending point (inclusive), and print out each number within the range with the corresponding format shown on the sample output.
    However, skip the printing of statement if the integer is divisible by 4.
    Tip: Utilize the continue keyword to complete the process.

Input

1. The starting point

2. The ending point

Output

The first line will contain a message prompt to input the starting point.
The second line will contain a message prompt to input the ending point.
The succeeding lines will contain the appropriate messages.

Enter·the·starting·point:·2
Enter·the·ending·point:·10
Loading...2%
Loading...3%
Loading...5%
Loading...6%
Loading...7%
Loading...9%
Loading...10%

*/

#include<stdio.h>
int main(void) {

	int startingPoint, endingPoint;

	printf("Enter the starting point: ");
	scanf("%d", &startingPoint);
	printf("Enter the ending point: ");
	scanf("%d", &endingPoint);

	for (int count = startingPoint; count <= endingPoint; count++){
		
		if(count % 4 == 0) {
			continue;
		} else {
			printf("Loading...%d%%\n", count);
		}
	}
	return 0;
}
