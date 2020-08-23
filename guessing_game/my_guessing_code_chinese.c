#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void guessing();        //中文使用者注意:compiler時請使用big5編碼，至於要編輯請用UTF-8.否則將會呈現亂嗎。
void line();
void loading_effect();

int main()
{
    line();
    printf("歡迎來到猜數字遊戲!\n");//歡迎區域
    printf("每回合有(5)次的猜測機會.\n");//welcome
    printf("我們就直接開始吧.\n");//welcome
    line();
    char option;
    do{
        guessing();
        printf("你要在玩一次嗎?(要打y/不要打n): "); //是否要重玩.
            scanf(" %c", &option);   
        line();
    }while(option=='y');    //當while成立，執行do.
        printf("下次再見Bye Bye~\n");
        line();
    return 0;
}

void guessing(){               //guessing 函式
    srand(time(0));            //不要每次都是一樣的數字.
    int answer = rand() % 100; //範圍在 0~99
    int guess;
    int count=5;
    loading_effect();
    do
    {  
        line();
        printf("請輸入你要猜的數字(範圍在0~99): ");
        scanf("%d", &guess);
        count--;            //5次 到 ~ 0次;
        line();
        if (guess > answer)
        {
            printf("數字在小一點.  <---\n還剩(%d)次的機會可以猜.\n",count);
        }
        else if (guess < answer)
        {
            printf("數字在大一點.  <---\n還剩(%d)次的機會可以猜.\n",count);
        }
        else if (guess == answer)
        {
            printf("讚啦!猜到了.\n");
        }
    }while (guess != answer&&count>0);  //回合結束.
        printf("-----------------\n答案是:%d\n",answer);
    return;
}
void line(void){
    printf("=====================\n");
    return;
}
void loading_effect(void){ //參考 stackoverflow加修改.//https://stackoverflow.com/questions/51983405/loading-dots-effect-with-printf-in-c
    for ( int loop = 0; loop < 1; ++loop) {
        for ( int each = 0; each < 4; ++each) {
            printf ( "\r我正在為你產生新數字%.*s   \b\b\b", each, "...");
            fflush ( stdout);//當下一欄沒有輸出，執行列印(priting)。
            sleep (1);
        }
    }
    printf ( "\n");
    return;
}
