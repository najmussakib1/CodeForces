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
        vector<int>a(n);
        for(auto &x:a) cin>>x;
        int curr =0;
        for (auto it = a.rbegin(); it != a.rend(); ++it){
            int dist = *it-curr;
            curr =*it+dist;
        }
        cout<<curr/2<<endl;
    }
}