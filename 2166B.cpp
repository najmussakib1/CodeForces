#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b;
        int n;
        cin>>a>>b>>n;
        int time=1;
        if(a!=b){
        if(b*n<=a){
            time=1;
        }
        else{
            time=2;
        }
    }
        cout<<time<<endl;
    }
}