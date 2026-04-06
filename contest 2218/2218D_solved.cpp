#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include <set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=1;i<=n;i++){
            a[i-1]=lcm(2*i+1,2*i+3);
            cout<<a[i-1]<<" ";
        }
        cout<<endl;
}
}