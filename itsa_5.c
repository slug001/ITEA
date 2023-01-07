#include <stdio.h>

void helf(int time,int num){
    if(time>8){
    }else{
        helf(++time,num/2);
        printf("%d",num%2);
    }

}

int main(){
    int num;
    scanf("%d",&num);
    if(num<0){
        num+=256;
    }
    helf(1,num);
    printf("\n");
    return 0;
}
