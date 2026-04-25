#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> a(n);
        long long total=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            total+=a[i];
        }
        vector<long long> x(m);
        for(int i=0;i<m;i++) cin>>x[i];
        int ev_count=count_if(x.begin(),x.end(),[](int x){
            return x%2==0;
        });
        int odd_count=m-ev_count;
        vector<long long> s_odd, s_even;
        for (int i = 0; i < n; ++i) {
            if ((i + 1) % 2 != 0) s_odd.push_back(a[i]);
            else s_even.push_back(a[i]);
        }

        sort(s_odd.rbegin(), s_odd.rend());
        sort(s_even.rbegin(), s_even.rend());
        long long marked_sum = 0;
        if (odd_count > 0 && !s_odd.empty()) {
            marked_sum += s_odd[0];
            for (int i = 1; i < (int)s_odd.size() && i < odd_count; ++i) {
                if (s_odd[i] > 0) {
                    marked_sum += s_odd[i];
                } else {
                    break;
                }
            }
        }
        if (ev_count > 0 && !s_even.empty()) {
        marked_sum += s_even[0];
        for (int i = 1; i < (int)s_even.size() && i<ev_count; ++i) {
            if (s_even[i] > 0) {
                marked_sum += s_even[i];
            } else {
                break;
            }
        }
    }

    cout << total - marked_sum << endl;
    }

}