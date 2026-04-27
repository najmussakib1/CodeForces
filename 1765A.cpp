#include<iostream>
#include<numeric>
#include<cstdint>
#include<algorithm>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=INT32_MAX;
        long long ans_a=0;
        long long ans_b=0;
        if(n%2==0){
            ans_a=n/2;
            ans_b=n/2;
        }
        else{
        long long d=-1;

    for(long long i=3;i*i<=n;i+=2){
        if(n%i==0){
            d=i;
            break;
        }
    }

    if(d==-1){
        ans_a=1;
        ans_b=n-1;
    }else{
        ans_a=n/d;
        ans_b=n-ans_a;
    }
    }
        cout<<ans_a<<" "<<ans_b<<endl;
    }
}