#include <iostream>

using namespace std;

int main(){
    char c;
    int ascii,tot[27]={0},time=0;
    bool newword=0;
    while(c=cin.get()){
        if(time>110) break;
        time++;
        if(c=='\n') break;
        if(c>='a'&& c<='z'){
            ascii=c%'a';
            tot[ascii]++;
        }else if(c>='A'&& c<='Z'){
            ascii=c%'A';
            tot[ascii]++;
        }else{
            newword=0;
            continue;
        }
        if(newword==0){
            tot[26]++;
            newword=1;
        }
    }
    cout<<tot[26]<<endl;
    for(int i=0;i<26;i++){
        if(tot[i]>0){
            cout<<static_cast<char>('a'+i)<<" : "<<tot[i]<<endl;
        }
    }
    return 0;
}