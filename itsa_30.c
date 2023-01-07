#include <stdio.h>

int main(){
    int month,day;
    scanf("%d%d",&month,&day);
    day=day+30*month;
    if(21<=day && day<=48){
        printf("Aquarius\n");
    }
    else if(51<=day && day<=78) printf("Aquarius\n");
    else if(79<=day && day<=110) printf("Pisces\n");
    else if(111<=day && day<=140) printf("Aries\n");
    else if(141<=day && day<=171) printf("Taurus\n");
    else if(172<=day && day<=201) printf("Gemini\n");
    else if(202<=day && day<=232) printf("Cancer\n");
    else if(233<=day && day<=263) printf("Leo\n");
    else if(264<=day && day<=293) printf("Virgo\n");
    else if(294<=day && day<=323) printf("Libra\n");
    else if(324<=day && day<=352) printf("Scorpio\n");
    else if(353<=day && day<=381) printf("Sagittarius\n");
    else printf("Capricorn\n");

    return 0;
}
