#include <stdio.h>

int main(){
    int money,a,b,c;
    scanf("%d,%d,%d,%d",&money,&a,&b,&c);
    money=money-15*a-20*b-30*c;
    if(money<0){
        printf("0\n");
        return 0;
    }
    int re50=0,re5=0,re1=0;
    if(money/50){
        re50=money/50;
        money%=50;
    }
    if(money/5){
        re5=money/5;
        money%=5;
    }
    if(money/1){
        re1=money/1;
    }

    printf("%d,%d,%d\n",re1,re5,re50);

    return 0;


}
