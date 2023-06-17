#include <iostream>
using namespace std;

int main(){
    int mon;
    while(cin>>mon){
        if(mon>=3 && mon<=5){
            cout<<"Spring"<<endl;
        }else if(mon>=6 && mon<=8){
            cout<<"Summer"<<endl;
        }else if(mon>=9 && mon<=11){
            cout<<"Autumn"<<endl;
        }else{
            cout<<"Winter"<<endl;
        }
    }
    return 0;
}