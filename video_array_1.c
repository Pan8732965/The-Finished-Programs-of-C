#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){

    //count the times of the dice count:
    srand(time(0));
    int counter[6]={0};
    int i;
    for(i=1;i<=6000;i++){
        int dice=rand()%6+1;
        switch(dice){
            case 1:counter[0]++;break;
            case 2:counter[1]++;break;
            case 3:counter[2]++;break;
            case 4:counter[3]++;break;
            case 5:counter[4]++;break;
            case 6:counter[5]++;break;
        }
    }
    int j;
    for(j=0;j<=5;j++){
        printf("%d:%d\n",j,counter[j]);
    }
    return 0;
}