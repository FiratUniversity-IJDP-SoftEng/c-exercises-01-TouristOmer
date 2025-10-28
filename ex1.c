#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;
    printf("Guess the secret number (1-5): ");
    scanf("%d", &number);

    if (number == 3) {

    printf("Correct!\n");
}
    else if (number >= 1 && number <= 5) {

    printf("Wrong!\n");
}
    else {

    printf("Your guess must be between 1-5.\n");
}

    return 0;
}
