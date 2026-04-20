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
        if(n>2){
            if(a[1]!=0 && a[1]>a[0]){
                // cout<<"baracchi"<<endl;
                a[1]=a[1]+a[2];
                a[2]=0;
            }
            int ans=a[0]+min(a[0],a[1]);
            cout<<ans<<endl;
        }
        else{
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=*min_element(a.begin(),a.begin()+i+1);
            }
            cout<<ans<<endl;
        }
    }
}