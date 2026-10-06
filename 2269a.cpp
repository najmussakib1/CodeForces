#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long ans;
        if(n==k){
            ans = 2*k;
        }
        else if(k==1){
            ans = pow(2,n);
        }
        else{
            ans = (k-1)*2 +pow(2,n-k+1);
        }
        cout << ans << endl;
    }
}