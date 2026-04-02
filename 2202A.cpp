#include <iostream>
using namespace std;

// (x+2,y+1), (x+3,y),(x+4,y-1)
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x-2*y)%3==0 && x>=2*(abs(y))){
            int L=max(0,-y);
            int R=(x-2*y)/6;
            if(L<=R){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}