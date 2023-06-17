#include <iostream>

using namespace std;

int main(){
    int num,tot=0;
    while(cin>>num){
        for(;num>1;num--){
            if(!(num%3))
                tot+=num;
        }
        cout<<tot<<endl;
        tot=0;
    }
    return 0;
}