#include <iostream>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout<<a*1.6<<endl;
    }
    return 0;
}