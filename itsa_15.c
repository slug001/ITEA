#include <stdio.h>

int main(){
    char other;
    int chacter[26]={0},word=0,Static=0,time=0;
    while(time<110){
        other=getchar();
        if(other>=65 &&other<=90){
            chacter[other%65]++;
            Static=1;
        }else if(other>=97 && other<=122){
            chacter[other%97]++;
            Static=1;
        }else if(other=='\n'){
            if(Static==1){
                word++;
            }
            break;
        }else{
            if(Static==1){
                word++;
            }
            Static=0;
        }
        time++;
    }

    printf("%d\n",word);
    for(int i=0;i<26;i++){
        if(chacter[i]>0){
            printf("%c : %d\n",i+97,chacter[i]);
        }
    }
    return 0;
}
