#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> nums_d;
        for(long long power=10;power<=n;power=power*10){
            long long d= n/(power+1);
            long r=n%(power+1);
            if(r==0) nums_d.emplace_back(d);
        }
        int ans= nums_d.size();
        sort(nums_d.begin(),nums_d.end());
        cout<<ans<<endl;
        if(ans){
            for(int i=0;i<ans;i++){
                if(i==ans-1) cout<<nums_d[i]<<endl;
                else cout<<nums_d[i]<<" ";
            }
        }
    }
}