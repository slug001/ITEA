#include <stdio.h>
int Recursive(int num){
    if(num==1 || num==0){
        return num+1;
    }else{
        return Recursive(num-1)+Recursive(num/2);
    }
}

int main (){
    int num;
    scanf("%d",&num);

    printf("%d\n",Recursive(num));
    return 0;
}
