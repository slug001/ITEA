#include <stdio.h>

int cash(int n ,int h1,int h2,int h3,int t){
    if(n==h1||n==h2||n==h3) return t;
    int k=1,i;
    switch (t){
        case 1:
            k=10000000;
            break;
        case 2:
            k=1000000;
            break;
        case 3:
            k=100000;
            break;
        case 4:
            k=10000;
            break;
        case 5:
            k=1000;
            break;
        case 6:
            return 7;
    }
    return cash(n%k,h1%k,h2%k,h3%k,t+1);
}

int main(){
    int sp,h1,h2,h3,t,i,now,a;
    long long int tot[8]={0};
    scanf("%d%d%d%d%d",&sp,&h1,&h2,&h3,&t);
    for(i=0;i<t;i++){
        scanf("%d",&now);
        if(now==sp){
            tot[0]+=1;
            continue;
        }else  a=cash(now,h1,h2,h3,1);
        tot[a]+=1;
    }
    for (i=0;i<6;i++)
        printf("%d ",tot[i]);
    printf("%d\n",tot[6]);

    long long int all=0;
    all+=tot[0]*2000000+tot[1]*200000+tot[2]*40000+tot[3]*10000+tot[4]*4000+tot[5]*1000+tot[6]*200;
    printf("%lld\n",all);

    return 0;
}
