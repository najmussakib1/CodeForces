#include <iostream>
#include <algorithm>

using namespace std;

const long long MOD = 998244353;

long long func1(long long m) {
    if (m < 0) {return 0;}
    long long count = 1;
    if (m >= 3){
        count += (m - 3) / 4 + 1;
    }
    return count;
}
long long func2(long long m) {
    if (m < 0) {return 0;}
    if (m >= 1){
        return ((m - 1) / 4) + 1;
    }
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n, x;
    cin >> n >> x;
    long long m1 = x - 1;
    
    long long c10 = func1(m1) % MOD;
    long long c20 = (func1(n) - func1(m1) + MOD) % MOD;
    
    long long c11 = func2(m1) % MOD;
    long long c21 = (func2(n) - func2(m1) + MOD) % MOD;
    
    long long ans = (c10 * c20 % MOD + c11 * c21 % MOD) % MOD;

    //fun ans prin
    cout << ans << endl;
    }
    return 0;
}
