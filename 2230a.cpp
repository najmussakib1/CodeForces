#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long ans=0;
        long long x=n/3;
        if(3*a<b){
                ans+=3*a*x;
            } else {
                ans+=b*x;
            }
        n=n%3;
        if(n*a<b){
            ans+=n*a;
        }
        else{
            ans+=b;
        }
        cout<<ans<<endl;
    }
}