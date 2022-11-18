/*4. Absolutely Ceiled

by CodeChum Admin

Ever wonder what an absolute value of a number means?


Well, I know you don't, because you're a great programmer already, but my students still don't know what it is and how it works, and the only way they’re going to listen to my discussions is if they're presented digitally. And oh, I also want to insert some concepts of ceiling a number too, if you may.


I know that you're quite annoyed with me always asking for your help, but it's all I have to make my students want to learn Math, so could you please help me for the nth time?


Instructions:

    A variable containing a floating point value is provided in the code editor on the side for you to use. All you have to do is to print out the original value on the first line, and its absolute ceil equivalent on the second line, following the format in the sample output below.
    Recall on the current lesson on math functions.
    First compute for the absolute value of the given variable using the appropriate math function in C.
    Then, compute for the ceiling value of the absolute value computed using the appropriate math function in C as well.
    Finally, print the absolute ceil value with no decimal place using the appropriate placeholder.
    Don’t forget to add in the math library in your code. Output exactly the same as that of the sample output to pass the problem.

Output

Multiple lines containing strings.

Original·Value:·-2.54·
Absolute·Ceil·Value:·3
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	float original_value = -2.54;

	printf("Original Value: %.2f", original_value);
	printf("\nAbsolute Ceil Value: %.0f", ceil(fabs(original_value)));

	return 0;
}
