#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_P = 200000;
vector<int> primes;
bool is_prime[MAX_P + 1];

void sieve() {
    fill(is_prime + 2, is_prime + MAX_P + 1, true);
    for (int p = 2; p <= MAX_P; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
            if (1LL * p * p <= MAX_P) {
                for (int i = p * p; i <= MAX_P; i += p) {
                    is_prime[i] = false;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve();
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            // Using a_i = p_i * p_{i+1} ensures gcd(a_i, a_{i+1}) = p_{i+1}
            // For n elements, we need n+1 primes: p_0, p_1, ..., p_n
            // gcd(a_0, a_1) = p_1, gcd(a_1, a_2) = p_2, ..., gcd(a_{n-2}, a_{n-1}) = p_{n-1}
            // All gcd values {p_1, p_2, ..., p_{n-1}} are distinct primes.
            long long val = 1LL * primes[i] * primes[i + 1];
            cout << val << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}