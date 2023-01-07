#include <stdio.h>

int main(){
    char first;
    int num[9]={0};
    scanf("%c",&first);
    for(int i=0;i<9;i++)
        scanf("%1d",&num[i]);
    int w= first,k;
    switch(w){
        case 'A':
            k=10;break;
        case 'B':
            k=11;break;
        case 'C':
            k=12;break;
        case 'D':
            k=13;break;
        case 'E':
            k=14;break;
        case 'F':
            k=15;break;
        case 'G':
            k=16;break;
        case 'H':
            k=17;break;
        case 'J':
            k=18;break;
        case 'K':
            k=19;break;
        case 'L':
            k=20;break;
        case 'M':
            k=21;break;
        case 'N':
            k=22;break;
        case 'P':
            k=23;break;
        case 'Q':
            k=24;break;
        case 'R':
            k=25;break;
        case 'S':
            k=26;break;
        case 'T':
            k=27;break;
        case 'U':
            k=28;break;
        case 'V':
            k=29;break;
        case 'X':
            k=30;break;
        case 'Y':
            k=31;break;
        case 'W':
            k=32;break;
        case 'Z':
            k=33;break;
        case 'I':
            k=34;break;
        case 'O':
            k=35;break;
    }
    int tot=k/10+9*(k%10)+8*num[0]+7*num[1]+6*num[2]+5*num[3]+4*num[4]+3*num[5]+2*num[6]+num[7]+num[8];
    if(tot%10){
        printf("WRONG!!!\n");
    }else printf("CORRECT!!!\n");
    return 0;
}
