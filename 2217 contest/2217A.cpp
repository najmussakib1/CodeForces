#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(auto x:a) sum+=x;
        if(sum%2==0){
            vector<int> pp(n,k);
            int sum_pp=n*k;
            if(sum_pp%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}