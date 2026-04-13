#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
    long long m;
    cin>>n>>m;
    bool ans=true;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long L = 0, R = m - 1;

    for (int i = 0; i < n; ++i){
        long long pos = (long long)i + 1;
        long long f = (m - (a[i] % m) - (pos % m) + 2 * m) % m;


        long long len = (R - L + m) % m + 1;
        long long pos_f = (f - L + m) % m;

        if (pos_f < len){
            if (len == 1){
                ans=false;
                break;
            }
            if (pos_f == 0){
                L = (L + 1) % m;
            }
            else if (pos_f == len - 1){
                //kichu kora lagbe na
            }
            else{
                L = (f + 1) % m;
            }
        }
        R = (f - 1 + m) % m;
    }

    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
    }
    
    return 0;
}

