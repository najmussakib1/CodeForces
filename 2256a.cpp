#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(), v.end());
        while(1){
            if(v[2]<=v[0]+v[1]){
                break;
            }
            v[2]=v[0]+v[1];
        }
        cout<<v[2]-v[0]<<endl;
    }
}