#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++)cin>>b[i];
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        // for(auto x:b)cout<<x<<" ";
        // cout<<endl;
        int ans=1;
        for(int i=0;i<n-2;i++){
            if(b[i+2]!=b[i]%b[i+1]){
                ans=0;
                break;
            }
        }
        if(ans){
            cout<<b[0]<<" "<<b[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}