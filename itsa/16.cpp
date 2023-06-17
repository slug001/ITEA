#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int time=0;
    string A,B;
    cin>>A>>B;
    int flag =B.find(A);
    while(flag!= string::npos){
        time++;
        flag+=1;
        flag=B.find(A,flag);
    }

    cout<<time<<endl;
    return 0;
}
