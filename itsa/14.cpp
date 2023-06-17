#include <iostream>
#include <math.h>
using namespace std;
int level=1;
int reverse(int n);

int main(){
    int num,re;
    while(cin>>num){
        re=reverse(num);
        if(re==num){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        level=1;
    }
    return 0;
}

int reverse(int n){
    if(n<10)
        return n;
    return reverse(n/10)+(n%10)*pow(10,level++);
}