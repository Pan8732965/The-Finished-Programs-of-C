#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, number, currentGuess, MAX_GUESS = 5;
    int answer = 'n';
    time_t t;

    srand((unsigned)time(&t));
    number = rand() % 200 + 1;

    printf("Welcome to the game of Guess It! \nI will choose a number between 1 and 200. \nYou will try to guess that number.");
    printf("If you guess wrong, I will tell you if you guessed too high or too low. \nYou have 5 tries to get the number. \n");
    printf("\nOK, I am thinking of a number. Try to guess it. \n");

    for (i = 0; i < MAX_GUESS; i++)
    {
        printf("\nYour guess?");
        scanf("%i", &currentGuess);

        if (currentGuess > 200)
        {
            printf("Illegal guess. Your guess must be between 1 and 200.\n");
            printf("Try again.\n ");
        }
        else if (currentGuess > number)
        {
            printf("Too high!\n");
        }
        else if (currentGuess < number)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("****CORRECT****\n");
            return 0;
        }
    }

    printf("Sorry you have entered the maximum number of tries. \n");
    printf("Want to play again? \n");
    scanf("%i", &answer);

    if (answer == 'n')
    {
        printf("Goodbye, it was fun. Play again soon.\n");
        return 0;
    }
    else if (answer != 'n')
    {
        printf("Ok, I am thinking of a number. Try to guess it.\n");
    }
}