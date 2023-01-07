#include <stdio.h>

int main(){
    int allCar,time[25]={0},begin,end;
    scanf("%d",&allCar);
    for (int i=0;i<allCar;i++){
        scanf("%d %d",&begin,&end);
        for (begin;begin<end;begin++){
            time[begin]++;
        }
    }
    int max=0;
    for(int i=0;i<25;i++){
        if(time[i]>max){
            max=time[i];
        }
    }
    printf("%d\n",max);

    return 0;
}
