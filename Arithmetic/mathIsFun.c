// 1. Math is Fun
//
// by CodeChum Admin
//
// Hello there!
//
//
// I'm a math teacher from the school around the neighborhood and I've heard from my co-teacher there that you were the
// one behind all those amazing games that the students in the school are loving so I've come to ask for your help as
// well!
//
//
// You see, since young people nowadays are so into technology, I think that if I make my math lessons digital and
// tech-related then they'd be willing to learn about it more, so I want to ask for your help on starting this plan with
// just simply showing them an addition example, digitally.
//
//
// I know it's quite sudden, but can I ask help from you, too?
//
//
// Instructions:
//
//     There are two variables containing integer values that are already prepared for you in the code editor on the
//     side. Create a variable and store the sum of the two given integers.
//         Print out the statement like that of the sample output using placeholders.
//
//         Output
//
//         A line containing a string.
//
//         8·+·2·=·10
//

#include <stdio.h>
int main(void) {

    int num1 = 8;
    int num2 = 2;
    int sum  = num1 + num2;

    printf("%d + %d = %d", num1,  num2, sum);

    return 0;
}
