#include<iostream>
#include<algorithm>
using namespace std;
void ver(int n,int m){
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int k=(n+1)/2;
    cout<<k<<endl;
    for(int t=1;t<=k-1;t++){
        int l=t+1;
        int r=min(k+t,n);
        cout<<l<<" "<<r<<endl;
    }
    cout<<k+1<<" "<<n<<endl;

}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        ver(n, m);
    }
    return 0;
}