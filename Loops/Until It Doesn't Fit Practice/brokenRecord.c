#include <stdio.h>
int main (void) {

    int number, count = 0;

    printf("Enter n: ");
    scanf("%d", &number);

    while (count < number)
    {
        printf("CodeChum is awesome\n");
        count++;
    }

    return 0;
}