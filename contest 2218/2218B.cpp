#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[7];
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
        int max=a[0]-a[1]-a[2]-a[3]-a[4]-a[5]-a[6];
        for(int i=1;i<7;i++){
            int sum=-(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6])+2*a[i];
            if(sum>max) max=sum;
        }
        cout<<max<<endl;
    }
}