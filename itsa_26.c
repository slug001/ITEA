#include <stdio.h>

void swap(int* a,int* b){
    int i,tmp;
    for(i=0;i<2;i++){
        tmp=a[i];
        a[i]=b[i];
        b[i]=tmp;
    }
}


int main(){
    int t,i,j;
    scanf("%d",&t);
    int num[t][2],tmp;
    for(i=0;i<t;i++){
        scanf("%d",&tmp);
        num[i][0]=tmp,num[i][1]=0;
        while(tmp>10){
            num[i][1]+=tmp%10;
            tmp/=10;
        }
        num[i][1]+=tmp;
    }
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
            if(num[i][1]>num[j][1]){
                swap(num[i],num[j]);
            }else if(num[i][1]==num[j][1] && num[i][0]>num[j][0]) swap(num[i],num[j]);
        }
    }

    for(i=0;i<t-1;i++)
        printf("%d ",num[i][0]);
    printf("%d\n",num[t-1][0]);
    return 0;
}
