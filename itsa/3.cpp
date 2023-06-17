#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(pow(a,2)+pow(b,2)>10000){
            cout<<"outside"<<endl;
        }else{
            cout<<"inside"<<endl;
        }
    }
    return 0;
}