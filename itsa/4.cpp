#include <iostream>

using namespace std;

int main(){
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    if(h2<h1)
        h2+=24;
    int time= (h2*60+m2)-(h1*60+m1);
    if(time<120){
        cout<<(time/30)*30<<endl;
    }else if(time<240){
        cout<<120+(((time-120)/30)*40)<<endl;
    }else{
        cout<<280+(((time-240)/30)*60)<<endl;
    }

    return 0;
}
