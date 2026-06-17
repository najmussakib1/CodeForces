#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n);
        for(int i=0;i<n;i++) cin>>h[i];
        int max_val = *max_element(h.begin(), h.end());
        int min_val = *min_element(h.begin(), h.end());
        cout<<max_val - min_val +1<<endl;
    }
}