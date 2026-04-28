#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<set<int>> a(n,set<int>());
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                a[i].insert(x%n);
            }
            if(a[i].size()!=1){
                ans=0;
            }
        }
        if(ans){
            map<int, int> res;
            for(int i=0;i<n;i++){
                int c=*a[i].begin();
                res[i]=c;
            }
            vector<pair<int, int>> v(res.begin(), res.end());
            sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });
            for(auto x:v){
                cout<<x.first+1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}