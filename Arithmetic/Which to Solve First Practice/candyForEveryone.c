//3. Candy for Everyone
//
//by CodeChum Admin
//
//It's reward time!
//
//
//I have this culture of giving out some sort of reward to any student who participates in my discussions to serve as
//their motivation and a challenge to others to be more active in class.
//
//
//I have no problem doing this for a long time now, but recently, some of my students get into fights when I just
//randomly give out candies of random quantity since they think it's unfair and biased in my part. Hence, to show
//transparency into these types of kids, I figured that it would be better to show them how many of the candies should
//be given for each student, given the number of candies.
//
//
//But I'm not good at things like that though, so could I ask you to do that for me?
//
//
//Instructions:
//
//    The number of students and candies are already stored into two distinct variables and are already prepared for you
//    in the code editor on the side.
//        You are tasked to print out the statements shown in the sample output, following the same format. Remember how
//        to divide integers with your knowledge on the arithmetic operators in C.
//            Use placeholders on each of the values to be outputted that is stored in a variable, like the number of
//            students and candies, and the result as well.
//
//            Output
//
//            Multiple lines containing strings.
//
//            Students:·30·
//            Candies:·120·
//            Candies·per·student:·Candies/Students·
//            Candies·per·student:·120/30·
//            Candies·per·student:·4
//

#include <stdio.h>
int main (void) {

	int students = 30;
	int candies = 120;

	printf("Students: %d\n", students);
	printf("Candies: %d\n", candies);
	printf("Candies per student: Candies/Students\n");
	printf("Candies per student: %d/%d\n", candies, students);
	printf("Candies per student: %d\n", candies/students);

	return 0;

}
