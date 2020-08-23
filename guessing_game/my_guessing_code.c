#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void guessing();
void line();
void loading_effect();

int main()
{
    line();
    printf("Welcome to my guessing game.\n");//in the beginning of the welcome.
    printf("You have (5) times to guess each round.\n");//welcome
    printf("Let's get started.\n");//welcome
    line();
    char option;
    do{
        guessing();
        printf("Do you want to play again(yes enter y./no enter n.): "); //play again or not.
            scanf(" %c", &option);   
        line();
    }while(option=='y');    //when while set up,carry out "do".
        printf("See you next time.\n");
        line();
    return 0;
}

void guessing(){               //guessing function
    srand(time(0));            //not everytime is the same number.
    int answer = rand() % 100; //range at 0~99
    int guess;
    int count=5;
    loading_effect();
    do
    {  
        line();
        printf("Please enter your number to guess(0~99): ");
        scanf("%d", &guess);
        count--;            //5 times ~ 0;
        line();
        if (guess > answer)
        {
            printf("The number is smaller.  <---\nYou have (%d) times to guess.\n",count);
        }
        else if (guess < answer)
        {
            printf("The number is bigger.  <---\nYou have (%d) times to guess.\n",count);
        }
        else if (guess == answer)
        {
            printf("Nice.Got it! \n");
        }
    }while (guess != answer&&count>0);  //the round ended.
        printf("-----------------\nThe answer is %d\n",answer);
    return;
}
void line(void){
    printf("=====================\n");
    return;
}
void loading_effect(void){ //take reference on stackoverflow.//https://stackoverflow.com/questions/51983405/loading-dots-effect-with-printf-in-c
    for ( int loop = 0; loop < 1; ++loop) {
        for ( int each = 0; each < 4; ++each) {
            printf ( "\rI'm generating a new number%.*s   \b\b\b", each, "...");
            fflush ( stdout);//force printing as no newline in output
            sleep (1);
        }
    }
    printf ( "\n");
    return;
}
