#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int ans_without_ai=ceil(double(n)/double(x+y));
        int with_ai=z+ceil((n-z*x)/double(10*y+x));
        // cout<<ans_without_ai<<" "<<with_ai<<endl;
        cout<<min(ans_without_ai,with_ai)<<endl;
    }
}