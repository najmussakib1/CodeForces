#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> x(n),y(n);
        for(auto &i:x) cin>>i;
        for(auto &i:y) cin>>i;
        long long a=0,b=0;
        for(int i=n-1;i>=0;i--){
            long long na=max(x[i] - y[i] + a, b);
            long long nb=min(y[i] - x[i] + b, a);
            a=na;
            b=nb;
        }
        if(a>0){
            cout<<"Sunny"<<endl;
        }
        else{
            if(a<0){
                cout<<"Aubrey"<<endl;
            }
            else{
                cout<<"Draw"<<endl;
            }
        }
    }
}