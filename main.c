#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // Variable declaration
    char player;
    char computer;
    int randomNumber;

    srand(time(NULL));

    // Randomize computer choice to 3 numbers 
    // modulo 3 generates 3 numbers: 0 , 1, and 2
    randomNumber = rand() % 3;

    // Switch case for computer choices
    switch (randomNumber) {
        // 0 -> Rock | 1 -> Paper | 2 -> Scissors
        case 0:
            computer = 'r';
            break;
        case 1:
            computer = 'p';
            break;
        case 2:
            computer = 's';
            break;
    }

    // Terminal output
    printf("Welcome to Rock Paper Scissors!\n");
    printf("Let's play a game!\n");
    printf("Enter your choice (r/p/s): ");

    // Get and save the user choice
    scanf(" %c", &player);
    
    // Switch case for player choices
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