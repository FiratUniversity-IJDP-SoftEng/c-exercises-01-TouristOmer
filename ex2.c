#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);

    for(int i = 0; i < age; i++){

        printf("Happy birthday!\n");
    }
    return 0;
}
