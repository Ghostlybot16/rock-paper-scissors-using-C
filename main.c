#include <stdio.h>

int main() {
    
    // Variable declaration
    char player;
    char computer;
    
    // Terminal output
    printf("Welcome to Rock Paper Scissors!\n");
    printf("Let's play a game!\n");
    printf("Enter your choice (r/p/s): ");

    // Get and save the user choice
    scanf(" %c", &player);

    // Variable assignment
    computer = 's';

    
    // Switch case 
    switch (player) {
        case 'r':
            printf("You chose Rock\n");
            break;
        case 'p':
            printf("You chose Paper\n");
            break;
        case 's':
            printf("You chose Scissors\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    // Terminal output 
    printf("Player chose: %c\n", player);
    printf("Computer chose: %c\n", computer);

    return 0;
}