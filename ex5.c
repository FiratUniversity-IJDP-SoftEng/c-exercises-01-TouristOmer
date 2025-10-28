#include <stdio.h>
#include <stdlib.h>

void sayHello() {
    
    char name[20];
    
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello %s!", name);
    
}

int main(){
    sayHello();
    
    return 0;
}
