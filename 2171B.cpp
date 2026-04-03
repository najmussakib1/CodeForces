#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n-1;i++){
            if(a[i]==-1) a[i]=0;
        }
        if(n==2){
            if(a[0]==-1 && a[1]!=-1) a[0]=a[1];
            else if(a[1]==-1 &&a[0]!=-1) a[1]=a[0];
            else if(a[0]==-1 && a[1]==-1) {
                a[0]=0;
                a[1]=0;
            }
        }
        else{
            if(a[0]==-1 && a[n-1]==-1){
                a[0]=0;
                a[n-1]=0;
            }
            else if(a[0]==-1 && a[n-1]!=-1) a[0]=a[n-1];
            else if(a[n-1]==-1 && a[0]!=-1) a[n-1]=a[0];
        }
        int b=0;
        for(int i=0;i<n-1;i++){
            b+=a[i+1]-a[i];
        }
        cout<<abs(b)<<endl;
        for(int i=0;i<n;i++){
            if(i==n-1) cout<<a[i]<<endl;
            else cout<<a[i]<<" ";
        }
    }
}