#include <stdio.h>
#include <math.h>

enum Style{Composite,Prime};

int main(){
    int num,numSqrt;

    while(scanf("%d",&num)!=EOF){

        enum Style numStyle=Prime;

        if(num==1||num==0){
            printf("NO\n");
            continue;
        }
        numSqrt=sqrt(num);
        for(int i=2;i<=numSqrt;i++){
            if(num%i==0){
                numStyle=Composite;
                break;
            }
        }
        if(numStyle==Composite){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    return 0;
}
