#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> used;
        for(int i=1;i<=2*n;i++){
            used.insert(i);
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=*used.begin();
            used.erase(used.begin());
            if(i>=1){
                if(a[i]+a[i-1]<=2*n){
                    used.erase(a[i]+a[i-1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}