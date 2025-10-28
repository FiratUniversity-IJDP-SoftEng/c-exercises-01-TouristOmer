#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char pet[10];
    printf("Do you have cat or dog?\n");
    scanf("%s", pet);
    
    if (strcmp(pet, "cat") == 0) {
        printf("Meow!\n");
    }
    
    else if (strcmp(pet, "dog") == 0){
        printf("Woof!\n");
    }
    
    else {
        printf("You must be enter cat or dog.");
    }
    
    return 0;
}

