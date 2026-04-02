#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        float sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int f=0;
        for(int i=0;i<n;i++){
            float avg = (sum-arr[i])/(n-1);
            if(avg==arr[i]){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }

    }
}