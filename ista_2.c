#include <stdio.h>

int main(){
    int mile;
    float km;

    while(scanf("%d",&mile)!=EOF){
        km=mile*1.6;
        printf("%.1f\n",km);
    }

    return 0;
}
