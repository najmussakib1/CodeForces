#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int opeing=0,closing=0;
        for(auto x:s){
            if(x=='('){
                opeing++;
            }
            else{
                closing++;
            }
        }
        if(opeing==closing) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}