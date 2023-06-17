#include <iostream>
#include <vector>
using namespace std;

int main (){
    int r,c,tmp;
    while(cin>>r>>c){
        int arr[r][c]={0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                cout<<arr[j][i];
                if(j!=(r-1))
                    cout<<" ";
            }
            cout<<endl;
        }

    }
    return 0;

}