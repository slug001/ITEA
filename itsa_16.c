#include <stdio.h>

int main(){
    char main[515],branch[130];
    scanf("%s",&branch);
    scanf("%s",&main);
    int flag=0,i=0,allPass=1;
    int branchLen=strlen(branch),mainLen=strlen(main);
    int repeatTime=0;

    for(flag;flag<=mainLen-branchLen;flag++){
        if(main[flag]==branch[0]){
            for(i=0;i<branchLen;i++){
                if(main[flag+i]!=branch[i]){
                    allPass=0;
                    break;
                }
            }
            if(allPass){
                repeatTime++;
            }else{
                allPass=1;
            }
        }
    }

    printf("%d\n",repeatTime);

    return 0;
}
