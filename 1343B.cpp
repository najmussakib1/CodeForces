#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int first_half = 2*((n/2)*((n/2)+1))/2;
        int secondhalf=((n/2)-1)*((n/2)-1);
        int rem=first_half-secondhalf;
        if(rem%2==0){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                cout<<2*i<<" ";
            }
            for(int i=1;i<n/2;i++){
                cout<<2*i-1<<" ";
            }
            cout<<rem<<endl;
        }
    }
}