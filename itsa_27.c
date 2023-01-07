# include <stdio.h>


int main(){
    int ans[4],now[4];
    int i;
    scanf("%1d%1d%1d%1d",&ans[0],&ans[1],&ans[2],&ans[3]);
    while(1){
        scanf("%1d%1d%1d%1d",&now[0],&now[1],&now[2],&now[3]);
        if(now[0]==0&&now[1]==0&&now[2]==0&&now[3]==0)
            break;
        int y=0,n=0;
        for(i=0;i<4;i++){
            if(now[i]==ans[i]){
                y++;
            }else if(now[i]==ans[0]||now[i]==ans[1]||now[i]==ans[2]||now[i]==ans[3]) n++;
        }
        printf("%dA%dB\n",y,n);
    }
    return 0;
}
