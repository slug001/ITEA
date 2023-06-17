#include <iostream>

using namespace std;
int main(){
    int time,r1,c1,r2,c2;
    char oper;
    cin>>time;
    for(;time;time--){
        cin>>oper>>r1>>c1>>r2>>c2;
        if(oper=='+'){
            cout<<r1+r2<<" "<<c1+c2<<endl;
        }else if(oper=='-'){
            cout<<r1-r2<<" "<<c1-c2<<endl;
        }else if(oper=='*'){
            cout<<r1*r2-c1*c2<<" "<<r1*c2+r2*c1<<endl;
        }
    }

    return 0;
}