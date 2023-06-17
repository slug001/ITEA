#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    while(cin>> num){
        if(num==2||num==3){
            cout<<"YES"<<endl;
            continue;
        }
        int n=sqrt(num);
        for(;n>1;n--){
            if(num%n){
            }else{
                cout<<"NO"<<endl;
                break;
            }
            if(n==2)
                cout<<"YES"<<endl;
        }
    }
    return 0;
    
}