#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        int p1,p2;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(ans!=1){
                for(int j=0;j<i;j++){
                if((arr[i]%arr[j])%2==0){
                    ans=1;
                    p1=arr[i];
                    p2=arr[j];
                }
            }
            }
            
        }
        if(ans){
            cout<<p2<<" "<<p1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}