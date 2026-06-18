#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long merge(vector<int>& a, int l, int mid, int r) {
    vector<int> temp;
    int i = l, j = mid + 1;
    long long inv = 0;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i++]);
        } else {
            temp.push_back(a[j++]);
            inv += (mid - i + 1);
        }
    }

    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = l; k <= r; k++)
        a[k] = temp[k - l];

    return inv;
}

long long mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return 0;

    int mid = (l + r) / 2;

    long long inv = 0;
    inv += mergeSort(a, l, mid);
    inv += mergeSort(a, mid + 1, r);
    inv += merge(a, l, mid, r);

    return inv;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int need_to_do=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                need_to_do=1;
                break;
            }
        }
        int ans=0;
        if(need_to_do==1){
            ans=mergeSort(a,0,n-1);
        }

       int resp=1;
       sort(a.begin(),a.end());
       for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                resp=0;
                break;
            }
       }
       if(resp==0){
            cout<<-1<<endl;
       }
       else cout<<ans<<endl;
    }
}