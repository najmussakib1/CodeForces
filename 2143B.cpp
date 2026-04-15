#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(k);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<k;i++) cin>>b[i];
        sort(b.begin(),b.end());
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        long long sum=0;
        for(auto x:b){
            if(a.size()>=x){
                for(int i=0;i<x-1;i++){
                    sum+=a[i];
                }
                a.erase(a.begin(),a.begin()+x);
            }
            else{
                break;
            }
        }
        if(a.size()){
            for(auto x:a) sum+=x;
        }
        cout<<sum<<endl;
    }
}