#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n;
    cin>>s;

    vector<int> ones;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }

    if (ones.empty()) {
        cout << (n + 2) / 3 << endl;
        return;
    }

    long long total = ones.size();

    // Prefix gap: k zeros followed by a '1'
    // Minimum students to cover k nodes where the (k+1)-th node is '1'
    int prefix_gap = ones[0];
    total += (prefix_gap + 1) / 3;

    // Middle gaps: '1' followed by k zeros followed by '1'
    for (size_t i = 0; i + 1 < ones.size(); i++) {
        int gap = ones[i+1] - ones[i] - 1;
        total += gap / 3;
    }

    // Suffix gap: '1' followed by k zeros
    int suffix_gap = n - 1 - ones.back();
    total += (suffix_gap + 1) / 3;

    cout << total << endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}