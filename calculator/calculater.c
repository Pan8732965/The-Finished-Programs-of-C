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
        printf("----------這是一個計算機程式---------\n");
        printf("------This is a calculator program---\n");
                printf("請輸入第一個數字: \n");
                printf("Please enter the first number: \n");
                scanf("%lf", &num1);
        printf("----------------------------\n");
                printf("請輸入運算子(+,-,*,/,'%%'取餘數): \n");
                printf("Please enter the operator(+,-,*,/,'%%'): ");
                scanf(" %c", &oper);
        printf("----------------------------\n");
                printf("請輸入第二個數字: \n");
                printf("Please enter the second number: \n");
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
                    printf("錯誤...請重試 \n");
                    printf("Error...try again\n");
        }

        printf("----------------------------\n");
            printf("結果Result: %.1lf %c %.1lf = %.2f\n", num1, oper, num2, result);
                printf("您要再繼續嗎?(要輸入y/否則n): \n");
                        printf("Do you still want to continue?(Yes enter y/No enter n)\n");
                    scanf(" %c", &option);
    } while (option == 'y');

    return 0;
}