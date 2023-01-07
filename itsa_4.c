#include <stdio.h>

int main (){
    int inHour,inMin,outHour,outMin;
    int in,out,diff,money;
    scanf("%d %d",&inHour,&inMin);
    scanf("%d %d",&outHour,&outMin);
    in=inHour*60+inMin;
    out=outHour*60+outMin;
    if(out<in){
        out+=24*60;
    }
    diff=out-in;
    if(diff<=120){
        money=(diff/30)*30;
    }else if(diff<=240){
        money=((diff-120)/30)*40+120;
    }else{
        money=((diff-240)/30)*60+280;
    }
    printf("%d\n",money);
    return 0;

}
