#include <iostream>
#include <cmath>
using namespace std;
int find_pow(int n){
    int x=0;
        while(pow(3,x)<=n){
            x++;
        }
        x-=1;
        return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int x= find_pow(n);
        int rem = n-pow(3,x);
        long long cost=0;
        if(x==0){
            cost=n*3;
        }
        else{
            do{
                // cout<<x<<" "<<rem<<endl;
                cost+=pow(3,x+1)+x*pow(3,x-1);
                x=find_pow(rem);
                if(x==0){
                    cost+=rem*3;
                    break;
                }
                rem = rem-pow(3,x);
            } while(rem);
            if(x){
                cost+=pow(3,x+1)+x*pow(3,x-1);
            }
        
    }
        cout<<cost<<endl;
    }
}