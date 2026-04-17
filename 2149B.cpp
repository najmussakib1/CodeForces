#include<iostream>
#include<cstdint>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int max_dif=INT32_MIN;
        for(int i=0;i<n;i+=2){
            max_dif=max(max_dif,a[i+1]-a[i]);
        }
        cout<<max_dif<<endl;
    }
}