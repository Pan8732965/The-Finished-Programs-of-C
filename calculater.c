#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    float result;
    char oper;
    char option;

    do
    {
        printf("----------�o�O�@�ӭp����{��---------\n");
        printf("------This is a calculator program---\n");
                printf("�п�J�Ĥ@�ӼƦr: \n");
                printf("Please enter the first number: \n");
                scanf("%lf", &num1);
        printf("----------------------------\n");
                printf("�п�J�B��l(+,-,*,/,'%%'���l��): \n");
                printf("Please enter the operator(+,-,*,/,'%%'): ");
                scanf(" %c", &oper);
        printf("----------------------------\n");
                printf("�п�J�ĤG�ӼƦr: \n");
                printf("Please enter the third number: \n");
                scanf("%lf", &num2);

        result = 0;
        
        switch (oper)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            {
            int p1 = (int)num1;
            int p2 = (int)num2;
            result = p1 % p2;
            }
            break;
        default:
            printf("----------------------------\n");
                    printf("�L�Ī��B��...�ЦA�@�� \n");
                    printf("Error...try again\n");
        }

        printf("----------------------------\n");
            printf("���GResult: %.1lf %c %.1lf = %.2f\n", num1, oper, num2, result);
                printf("�z�n�b�~���?(�O�п�Jy/�_�h��Jn): \n");
                        printf("Do you still want to continue?(Yes enter y/No enter n)\n");
                    scanf(" %c", &option);
    } while (option == 'y');

    freopen("output.txt","w",stdout);
    return 0;
}