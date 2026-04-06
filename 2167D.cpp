#include<iostream>
#include<vector>
#include<algorithm>
#include <set>
#include <numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int min_count_even=0;
        long long min_even=1e9;
        for(auto x:a){
            if(x%2==0){
                min_count_even++;
                min_even=min(min_even,x);
            }
        }
        // int min_count_odd=count_if(a.begin(),a.end(),[](long long x){return x%2==1;});
        // if(min_count_odd){
        //     cout<<2<<endl;
        //     continue;
            
        // }
        // int min_count_2=count_if(a.begin(),a.end(),[](long long x){return x==2;});
        // if(min_count_2){
        //     cout<<3<<endl;
        //     continue;
        // }
        // int gcd_3_count=count_if(a.begin(),a.end(),[](long long x){return gcd(x,3)==1;});
        // if(gcd_3_count){
        //     cout<<3<<endl;
        //     continue;
        // }
        // int gcd_5_count=count_if(a.begin(),a.end(),[](long long x){return gcd(x,5)==1;});
        // if(gcd_5_count){
        //     cout<<5<<endl;
        //     continue;
        // }
        int start=2;
        while(count_if(a.begin(),a.end(),[start](long long x){return gcd(x,start)==1;})==0){
            start++;
        }
        cout<<start<<endl;
    }
}