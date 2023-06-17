#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class card{
    public:
        char flower;
        int num;
};
bool ssort(card c,card d);

int main(){
    int t;
    cin>>t;
    for(;t;t--){
        vector<card> c;
        card nextCard;
        do{
            cin>>nextCard.flower>>nextCard.num;
            c.push_back(nextCard);
        }while(cin.get()==' ');
        sort(c.begin(),c.end(),ssort);

        for(int i=0;i<c.size();i++){
            cout<<c[i].flower<<c[i].num;
            if(i!=c.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}

int count(card c){
    int f=0;
    if(c.flower=='S'){
        f=39;
    }else if(c.flower=='H'){
        f=26;
    }else if(c.flower=='D'){
        f=13;
    }
    f+=c.num;
    return f;
}

bool ssort(card c,card d){
    int s1,s2;
    s1=count(c);
    s2=count(d);
    return s1>s2;
}