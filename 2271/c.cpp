#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=1;
        while(x<=n){
            x<<=1;
        }
        cout<<2*x-1<<endl;
        string s ="0";
        for(int i=1;i<x;i++){
            s+=" "+to_string(i& -i)+" 0";
        }
        cout<<s<<endl;
    }
}