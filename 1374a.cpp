#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int k = n - ((n % x - y + x) % x);
        cout<<k<<endl;
    }
}