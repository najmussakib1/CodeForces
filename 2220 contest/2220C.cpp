#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int done=0;
         long long p, q;
    cin>>p>>q;

    long long E = p + 2 * q;
    long long K = 2 * E + 1;
    for (long long d = 3; d * d <= K; d += 2) {
        if (K % d == 0) {
            long long X = d;
            long long Y = K / d;
            
            long long n = (X - 1) / 2;
            long long m = (Y - 1) / 2;

            if (q <= (n + 1) * m && q <= n * (m + 1)) {
                cout << n << " " << m << endl;
                done=1;
                break;
            }
        }
    }
    
    if(!done) cout << "-1"<<endl;
    }
    return 0;
}
