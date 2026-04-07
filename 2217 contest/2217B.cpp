#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int pk;
        cin >> pk;
        int x = a[pk - 1];

        int left = 0;
        int current = x;
        for (int i = 0; i < pk; i++) {
            if (a[i] != current) {
                left++;
                current = a[i];
            }
        }
        if (current != x) left++;
        int right = 0;
        current = x;
        for (int i = n - 1; i >= pk - 1; i--) {
            if (a[i] != current) {
                right++;
                current = a[i];
            }
        }
        if (current != x) right++;

        cout << max(left, right) << endl;
    }
    return 0;
}
