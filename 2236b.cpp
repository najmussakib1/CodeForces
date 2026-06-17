#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=1;
        int MAX_i=n-k;
        for(int i=0;i<MAX_i;i++){
            if(s[i]=='1'){
                s[i]='0';
                s[i+k]=(s[i+k]=='1')?'0':'1';
            }
        }
        for(auto x:s){
            if(x=='1'){
                ans=0;
                break;
            }
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}