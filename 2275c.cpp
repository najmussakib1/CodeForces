#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<long long> tri;
        set<long long> s;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-4;i++){
            tri.emplace_back(a[i]+a[i+2]-a[i+4]);
            s.insert(a[i]+a[i+2]-a[i+4]);
        }
        long long ans=0;
        for(auto x:s){
            long long c = count(tri.begin(),tri.end(),x);
            ans+=c*(c-1)/2;
        }
        long long rmv=0;
        for(int i=0;i<n-4;i++){
            if(i+2<n-4 && tri[i]==tri[i+2]) rmv++;
            if(i+4<n-4 && tri[i]==tri[i+4]) rmv++;
        }
        cout<<ans-rmv<<endl;
    }
}