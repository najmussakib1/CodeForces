#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
    cin >> n;
    
    vector<int> p2(n), p3(n), p4(n);
    iota(p2.begin(), p2.end(), 0);
    iota(p3.begin(), p3.end(), 0);
    iota(p4.begin(), p4.end(), 0);
    
    mt19937 rng(1337 + n);
    
    while (true) {
        shuffle(p2.begin(), p2.end(), rng);
        shuffle(p3.begin(), p3.end(), rng);
        shuffle(p4.begin(), p4.end(), rng);
        
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            int d1 = n + p2[i] - i;
            int d2 = n + p3[i] - p2[i];
            int d3 = n + p4[i] - p3[i];
            if (d1 == d2 || d2 == d3 || d1 == d3) {
                ok = false;
                break;
            }
        }
        if (ok) break;
    }
    
    vector<int> res(4 * n);
    for (int i = 0; i < n; ++i) {
        res[i] = i + 1;
        res[n + p2[i]] = i + 1;
        res[2 * n + p3[i]] = i + 1;
        res[3 * n + p4[i]] = i + 1;
    }
    
    for (int i = 0; i < 4 * n; ++i) {
        cout << res[i] << (i == 4 * n - 1 ? "" : " ");
    }
    cout << "\n";
    }
    return 0;
}
