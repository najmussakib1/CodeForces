#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long a[n];
        long long s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=0){
                s1+=a[i];
            }
            else{
                s2+=a[i];
            }
        }
        if(s1<0) s1=-s1;
        if(s2<0) s2=-s2;
        long long sum=0;
        if(s1>s2) sum=s1-s2;
        else sum=s2-s1;
        cout<<sum<<endl;
    }
}