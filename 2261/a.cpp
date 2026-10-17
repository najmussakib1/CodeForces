#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int> ones;
        for (int i=0;i<n;i++){
            if (s[i]=='1'){
                ones.push_back(i);
            }
        }
        int k = ones.size();
        if (k==1){
            cout<<0<<endl;
        }
        else if (k == 2){
            cout<<1<<endl;
        }
        else{
            cout<<ones.back()-ones.front()<<endl;
        }
    }
}