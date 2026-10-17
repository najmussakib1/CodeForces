#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=0;
        for (int b = 30;b>=0;b--) {
            int cnt = 0;
            for (int i=0;i<n;i++){
                if (a[i] >> b & 1){
                    cnt++;
                }
            }
                
            if (cnt==n){
                ans+=1LL<<b;
            }
            else if(cnt>0){
                ans+=(1LL<<(b+1))-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}