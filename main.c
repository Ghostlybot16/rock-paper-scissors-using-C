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
    // rand() generates a random number
    // Modulo 3 restricts the results to three possible results 0, 1, or 2.
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
    if (scanf(" %c", &player) != 1) { // Check if scanf failed
        printf("Failed to read input.\n");
        return 1;
    }
    
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
            return 1; // Exit program
    }
    
    // Terminal output 
    printf("Player chose: %c\n", player);
    printf("Computer chose: %c\n", computer);

    if ( // Player win condition
        (player == 'r' && computer == 's') ||
        (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')
    ) {
        printf("You win!\n");

    } else if (player == computer) { // Draw condition
        printf("It's a draw!\n");

    } else { // Player lose condition
        printf("Computer wins!\n");
    }

    return 0;
}