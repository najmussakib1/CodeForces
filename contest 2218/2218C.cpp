#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int median(int a[]){
    sort(a,a+3);
    return a[1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[3*n];
        int count = n;
        for(int i=1;i<3*n;i+=3){
            count--;
            a[i]=(3*n-1)-count*2;
            a[i+1]=(3*n-1)-count*2+1;
        }
        count=1;
        for(int i=0;i<3*n;i+=3){
            a[i]=count;
            count+=1;
        }
        for(int i=0;i<3*n;i++){
            if(i==3*n-1)cout<<a[i]<<endl;
            else cout<<a[i]<<" ";
        }
    }
}