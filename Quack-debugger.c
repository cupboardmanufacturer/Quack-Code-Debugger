#include <stdio.h>

void quack();

int main() {

    char usrInput[2000]; 
    printf("\nEnter the issue you are dealing with: ");
    
    while (1) { 

        fgets(usrInput, sizeof(usrInput), stdin);
        
        quack();
        
        printf("Enter the issue you are dealing with: ");
    }

    return 0;
}

void quack() {
    printf("quack\n");
}