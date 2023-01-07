#include <stdio.h>

int main(){
    int runTime,real_1,real_2,unreal_1,unreal_2;
    char notation;
    scanf("%d ",&runTime);
    for(int i=0;i<runTime;i++){
        scanf(" %c %d %d %d %d",&notation,&real_1,&unreal_1,&real_2,&unreal_2);
        switch(notation){
            case '+':
                printf("%d %d\n",real_1+real_2,unreal_1+unreal_2);
                break;
            case '-':
                printf("%d %d\n",real_1-real_2,unreal_1-unreal_2);
                break;
            case '*':
                printf("%d %d\n",real_1*real_2-unreal_1*unreal_2,real_1*unreal_2+real_2*unreal_1);
                break;
        }
    }

    return 0;
}
