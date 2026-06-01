#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int ans=n/2;
        for(int i=0;i<n/2;i++){
            if(a[i]==a[n/2] && a[n-i-1]==a[n/2]) ans--;
        }
        cout<<ans<<endl;
    }
}