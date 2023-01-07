#include <stdio.h>

int main(){
    float tmp,max,min;
    scanf("%f",&max);
    min=max;
    for (int i=0;i<9;i++){
        scanf("%f",&tmp);
        if(tmp>max){
            max=tmp;
        }
        if(tmp<min){
            min=tmp;
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);

    return 0;
}
