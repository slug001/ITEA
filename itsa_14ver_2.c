#include <stdio.h>

int main(){
    char num[10000];
    while(scanf("%s",num)!=EOF){
        int essayLong=strlen(num),AC=1;

        for (int i=0;i<essayLong/2;i++){
            if(num[i]!=num[essayLong-i-1]){
                AC=0;
                break;
            }
        }
        if(AC==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}
