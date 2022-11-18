//3. Victory Party
//
//by CodeChum Admin
//
//It’s time for a celebration!
//
//
//Our team won the Volley Tourney 2020, and our MVP also gave it his all when he heard our special chant for him in the
//last game! To thank you for all the help you’ve done for us, we’re inviting you to the victory party we’re holding
//later at a new techie restaurant!
//
//
//And uh, about that, since it’s a techie restaurant, the method of ordering food is also so advanced that it has to be
//programmed in C to tell the computer how many customers will be given food and how much budget is intended for the
//food to be served at our table.
//
//
//There are 15 of us, including you, and our budget for the food is peaked at PHP 15,000, but we don’t know how to
//program so we’d like to trouble you again to order the food for us. Please help us again on this one!
//
//
//Instructions:
//
//    In this problem, you need to store two values: the number of customers, and the budget for the food and then
//    output the values while following the format shown in the sample output.
//        However, to give some you some challenge, you have to use just one variable to store the two. Remember the
//        concept of overwriting variable values in C, and you're good to go!
//            An initial code is provided to you. Again, do not create another variable, just use the existing one.
//
//            Output
//
//            Two lines containing a message on each.
//
//            Customers·=·15
//            Budget·=·PHP·15000
//


#include <stdio.h>
int main(void) {

    int celebration = 15;

    printf("Customers = %d\n", celebration);

    celebration = 15000;
    printf("Budget = PHP %d", celebration);

    return 0;

}


