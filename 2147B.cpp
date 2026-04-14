#include<iostream>
#include <vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans(2*n);
        int curr_ind=2*n-1;
        set<int> used_indices;
        for(int i=n;i>=1;i--){
            ans[curr_ind]=i;
            int next=curr_ind-i;
            if(used_indices.find(next)!=used_indices.end()){
                next=next-i;
            }
            ans[next]=i;
            used_indices.insert(next);
            curr_ind--;
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }
}