#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long p;
        cin>>n>>k>>p;
        vector<long long> a(n),tt(n+1,0);
        for(auto &x:a) cin>>x;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            tt[i+1]=tt[i]+a[i];
        }
        long long answer =0;
        for(int m=0;m*k<=n;m++){
            long long v=m*p+tt[n]-tt[m*k];
            answer=max(answer,v);
        }
        cout<<answer<<endl;
    }
}