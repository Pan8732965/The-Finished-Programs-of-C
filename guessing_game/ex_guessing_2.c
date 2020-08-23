#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void guessing();

int main()
{
    char option;
    do{
        guessing();
        printf("Do you want to continue(y/n): \n");
            scanf(" %c", &option);   
    }while(option=='y');    //when while set up,carry out "do".
     
    return 0;
}

void guessing(){               //guessing function
    srand(time(0));            //different number to make.
    int answer = rand() % 100; //range at 0~99
    int guess;
    char in[32] = {0};
    int i=0;
    char isNumber = 0;
    do
    {
        isNumber = 1;
        printf("pls enter your number to guess(0~99): ");
        scanf("%s", in);
        for(i=0;i<strlen(in);i++) {
            if(!isdigit(in[i])) {
                 printf("Error in input\n");
                 isNumber = 0;
                 break;
            }
        }
        
        if(!isNumber)
            continue;

        guess = atoi(in);
        if (guess > answer)
        {
            printf("smaller.\n");
        }
        else if (guess < answer)
        {
            printf("bigger\n");
        }
        else if (guess == answer)
        {
            printf("got it! The answer is %d\n", answer);
        }
        
    }while (guess != answer);
    return;
}