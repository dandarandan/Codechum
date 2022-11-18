//2. Cheer for the Ace!
//
//by CodeChum Admin
//
//Our volleyball team made it to the finals, and it’s all thanks to their oh-so-amazing ace! Thanks to the team’s MVP
//player with the number 10 on its back, they managed to score a few more before their opponent does because of his
//crazy strong spikes.
//
//
//Our cheer for the whole team helped a lot on supporting them with your cheer code, though, but we think that we should
//also create a special cheer for the ace, too, and we need your programming skills again to make the chant guide.
//
//
//With that being the case, could you help us out on this one, too?
//
//
//Instructions:
//
//    Create 4 variables and assign each one to the following values:
//            the letters M, V, and P on the first three variables
//                    the number 10 on the fourth variable
//                        You may name the variable anything you want as long as it follows proper naming convention.
//                            Using the variables you've created, print the cheer message like the one displayed in the
//                            sample output. The first line contains the cheer message for the MVP, and the second line
//                            containing a cheer message with the MVP’s jersey number, all in uppercase.
//                                Make use of placeholders to achieve the same result as that of the sample output.
//                                    An initial code with the 2 printf()'s needed for this problem is already provided
//                                    for you. Just fill in the blanks.
//
//                                    Output
//
//                                    Two lines containing a message on each.
//
//                                    LET'S·GO·M-V-P!
//                                    LET'S·GO·#10!


#include<stdio.h>

int main(void) {

    char first = 'M', second = 'V', third = 'P';
    int firstNumber = 10;

    printf("LET'S GO %c-%c-%c!\n", first, second, third);
    printf("LET's GO #%d!", firstNumber);

    return 0;
}
