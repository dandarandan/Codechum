#include <stdio.h>
int main(void) {

	int age;
	char letter;

	printf("What is your favorite letter?");
	scanf("My favorite letter is %c", &letter);
	printf("How old are you?");
	scanf("I am %d years old", &age);

	return 0;
}
