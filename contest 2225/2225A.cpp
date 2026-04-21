#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        int ans=0;
        long long p=x;
        while(p<y){
            if(p!=x){
                if(y%p!=0){
                    ans=1;
                    break;
                }
            }
            p+=x;
            // cout<<p<<endl;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}