#include <stdio.h>


int main(){
    int head=3,tail;
    while(scanf("%d",&tail)!=EOF){
        if(tail==3){
            printf("3\n");
            continue;
        }
    //���V�����3������
        if(tail%3){
            tail-=tail%3;
        }

        int total=(head+tail)*((tail-head)/3+1)/2;
        printf("%d\n",total);
    }
    return 0;
}
