#include<iostream>
#include<map>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>count_set;

        
        if(k==n){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            count_set[a[i]]++;
        }
        vector<pair<int,int>> n_c_s(count_set.begin(),count_set.end());
        sort(n_c_s.begin(),n_c_s.end(),[](pair<int,int> a, pair<int,int> b){
            return a.second>b.second;
        });
        while(k--){
            if(n_c_s.size()>1){
                n_c_s[0].second++;
                n_c_s[n_c_s.size()-1].second--;
                if(n_c_s[n_c_s.size()-1].second==0){
                    n_c_s.pop_back();
                }
            }
            else{
                break;
            }
        }
        int sum=n;
        for(auto x:n_c_s){
            sum-=(x.second-1);
        }
        cout<<sum<<endl;
    }
}