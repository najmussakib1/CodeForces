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
        for (int i=0;i<n;i++) cin>>a[i];
        long long score=0;
       
        while(a.size()>=k){
            int  p = max(a[n-k],a[k-1]);
            score+=p;
            if(p==a[n-k]) a.erase(a.begin()+n-k);
            else a.erase(a.begin()+k-1);
            n--;
        }
        cout<<score<<endl;
    }

}