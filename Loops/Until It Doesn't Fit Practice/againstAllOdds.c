#include <stdio.h>
int main(void) {

    int number, odd;

    printf("Enter n: ");
    scanf("%d", &number);

    while (number > 0)
    {
        if (number % 2 != 0)
        {
            printf("%d\n", number);
        }

        number--;
    }
}