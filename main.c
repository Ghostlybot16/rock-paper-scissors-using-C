#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int determine_winner(char player_choice, char computer_choice){
    if (player_choice == computer_choice) { // Draw condition
        return -1; 
    }

    if ( // Player win condition
        (player_choice == 'r' && computer_choice == 's') ||
        (player_choice == 'p' && computer_choice == 'r') ||
        (player_choice == 's' && computer_choice == 'p')
    ) {
        return 1;
    }

    return 0; // Player lose condition
}

int main() {
    
    // Variable declaration
    char player;
    char computer;
    int random_number;
    int winner_result;

    srand(time(NULL));

    // Randomize computer choice to 3 numbers 
    // rand() generates a random number
    // Modulo 3 restricts the results to three possible results 0, 1, or 2.
    random_number = rand() % 3;

    // Switch case for computer choices
    switch (random_number) {
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

    // Call the winning logic function to check win/lose/draw condition
    winner_result = determine_winner(player, computer);

    if (winner_result == 1) {
        printf("You Win!\n");
    } else if (winner_result == 0) {
        printf("Computer Wins!\n");
    } else {
        printf("It's a Draw!\n");
    }

    return 0;
}