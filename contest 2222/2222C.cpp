#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdint>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>sorted_array = a;
        sort(sorted_array.begin(),sorted_array.end());
        int med = sorted_array[n/2];
        vector<int>px(n+1,0),py(n+1,0);
        for(int i=0;i<n;i++){
            px[i+1] =px[i]+(a[i]<=med?1:-1);
            py[i+1] =py[i]+(a[i]>= med?1 :-1);
        }
        vector<int> dp(n + 1, INT32_MIN);
        dp[0] = 0;
        
        for (int i=1;i<=n;i++){
            for (int j=i-1;j>=0;j-=2){
                if(px[i] -px[j]>=1&&py[i]-py[j]>= 1){
                    if(dp[j]>=0) {
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                }
            }
        }
        cout<<max(1,dp[n])<<endl;
    }
}