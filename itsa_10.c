#include <stdio.h>

//輾轉相除法又稱歐基里德算法
int Euclidean(int big,int small){
    if(big%small){
        return Euclidean(small,big%small);
    }else{
        return small;
    }
}

int main(){
    //common 公因數
    int num1,num2,common;
    scanf("%d %d",&num1,&num2);
    if(num1>=num2){
        common=Euclidean(num1,num2);
    }else{
        common=Euclidean(num2,num1);
    }
    printf("%d\n",common);
    return 0;

}
