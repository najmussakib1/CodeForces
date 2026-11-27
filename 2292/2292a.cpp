#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l, a, b;
        cin>>l>>a>>b;
        int g1=gcd(a,l), g2=gcd(b,l);
        int lc=g1/gcd(g1,g2)*g2;
        cout<<l/lc<<endl;
    }
}