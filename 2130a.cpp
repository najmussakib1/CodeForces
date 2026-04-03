#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>

using namespace std;
int rep_zero(int x){
    if(x==0) return 1;
    else return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.emplace_back(x);
        }
        transform(a.begin(),a.end(),a.begin(),rep_zero);
        int s=0;
        for(auto p:a){
            s+=p;
        }
        cout<<s<<endl;
    }
}