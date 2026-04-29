#include<iostream>
#include<vector>
using namespace std;
long long mod=676767677;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int s=0;
        for(auto x:a) s+=x;
        vector<int> ans(n,0);
        int greaterThan1 = 0;

        for(int i=n-1;i>=0;i--){
            if(a[i] == 1)ans[i] = greaterThan1;
            if(a[i] >= 1) greaterThan1++;
        }
        int sum_1=0;
        for(auto x:ans){
            if(x!=0) sum_1++;
        }
        // cout<<sum_1<<endl;
        cout<<s-sum_1<<endl;
    }
}