#include<iostream>
#include<vector>
#include<set>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        if(gcd(n,a)>1 || gcd(m,b)>1){
            cout<<"NO"<<endl;
            continue;
        }
        if(gcd(n,m)>2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}