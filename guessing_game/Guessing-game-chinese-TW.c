#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

void guessing(); //����ϥΪ̪`�N:compiler�ɽШϥ�big5�s�X�A�ܩ�n�s��Х�UTF-8.�_�h�N�|�e�{�öܡC
void line();
void loading_effect();

int main()
{
    line();
    printf("�w��Ө�q�Ʀr�C��!\n");      //�w��ϰ�
    printf("�C�^�X��(5)�����q�����|.\n"); //welcome
    printf("�ڭ̴N�����}�l�a.\n");        //welcome
    line();
    char option;
    do
    {
        guessing();
        printf("�A�n�b���@����?(�n��y/���n��n): "); //�O�_�n����.
        scanf(" %c", &option);
        if ((isdigit(option)) || (option != 'n' && option != 'y'))
        {
            line();
            printf("Error���~.�нT�{�O�_��J���T...\n�Ϊ̦b�դ@��.\n");
        }
        line();
    } while (option == 'y'); //��while���ߡA����do.
    printf("�U���A��Bye Bye~\n");
    line();
    return 0;
}

void guessing()
{                              //guessing �禡
    srand(time(0));            //���n�C�����O�@�˪��Ʀr.
    int answer = rand() % 100; //�d��b 0~99
    int guess[5]={0};
    int count = 5;
    int i=0;
    loading_effect();
    do
    {
        line();
        printf("�п�J�A�n�q���Ʀr(�d��b0~99): ");
        scanf("%d", &guess[i]);
        count--; //5�� �� ~ 0��;
        line();
        if (guess[i] > answer)
        {
            printf("�Ʀr�b�p�@�I.  <---\n�ٳ�(%d)�������|�i�H�q.\n", count);
        }
        else if (guess[i] < answer)
        {
            printf("�Ʀr�b�j�@�I.  <---\n�ٳ�(%d)�������|�i�H�q.\n", count);
        }
        else if (guess[i] == answer)
        {
            printf("�g��!�q��F.\n");
            break;
        }
        i++;
    } while (guess[i] != answer && count > 0); //�^�X����.
    //---------
    printf("�z������:{");
    for(i=0;i<=4;i++){
        printf("%d ",guess[i]);
    }
    printf("}\n");
    //---------
    printf("-----------------\n���׬O:%d\n", answer);
    return;
}
void line(void)
{
    printf("=====================\n");
    return;
}
void loading_effect(void)
{ //�Ѧ� stackoverflow�[�ק�.//https://stackoverflow.com/questions/51983405/loading-dots-effect-with-printf-in-c
    for (int loop = 0; loop < 1; ++loop)
    {
        for (int each = 0; each < 4; ++each)
        {
            printf("\r�ڥ��b���A���ͷs�Ʀr%.*s   \b\b\b", each, "...");
            fflush(stdout); //��U�@��S����X�A����C�L(priting)�C
            sleep(1);
        }
    }
    printf("\n");
    return;
}
