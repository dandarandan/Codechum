//2. C in your Area
//
//by CodeChum Admin
//
//The kids are loving it! It works!
//
//
//The students are now eager to listen to my discussions as long as it's done digitally, and it's all thanks to your
//help! To keep this up, I need your help again for another math concept to be shown.
//
//
//This time, I have to trouble you by showing them how to solve the area of a square, given the length of one side of
//the square.
//
//
//Think you can do that for me?
//
//
//Instructions:
//
//    The length of one side of the square is already assigned to a variable that's already provided for you in the code
//    editor.
//        Now, print out the lines of text shown in the sample output using the given values and your knowledge on math
//        functions in C, especially for exponents.
//            For a challenge, try printing out the value of the last statement without creating another variable to
//            store a new value.
//
//            Output
//
//            Multiple lines of strings.
//
//            S·=·5·
//            Area·of·Square·=·S^2·
//            Area·of·Square·=·5^2·
//            Area·of·Square·=·25
//

#include <stdio.h>
#include <math.h>
int main(void)
{

    int side = 5;
	printf("S = %d\n", side);
    printf("Area of Square = S^2\n");
    printf("Area of Square = %d^2\n", side);
    printf("Area of Square = %.0lf\n", pow (side, 2));

	return 0;
}




