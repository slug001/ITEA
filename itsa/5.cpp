#include <iostream>
#include <math.h>

using namespace std;
void dd(int n,int time){
    if(time==1){
        cout<<n/time<<endl;
    }else{
        cout<<n/time;
        dd(n%time,time/2);
    }
}

int main(){
    int num;
    while(cin>>num){
        if(num<0){
            num=abs(num)-1;
            num=255-num;
        }
        dd(num,128);
    }
    return 0;
}
