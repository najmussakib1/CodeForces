#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==67) ans=1;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}