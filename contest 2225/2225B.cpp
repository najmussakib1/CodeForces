#include<string>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int mismatc_count=0;
        int ans=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                mismatc_count++;
            }
        }
        // cout<<mismatc_count<<endl;
        if(mismatc_count==1 || mismatc_count==2|| mismatc_count==0) ans=1;
        else ans=0;
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}