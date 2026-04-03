#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
bool check_beautiful(int b[],int n){
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            if(not(b[i]<b[i+1])){
                return false;
            }
        }
        else{
            if(not(b[i]>b[i+1])){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(check_beautiful(a,n)){
            cout<<0<<endl;
            continue;
        }
        int prefMax[n];
prefMax[0] = a[0];
for(int i = 1; i < n; i++){
    prefMax[i] = max(prefMax[i-1], a[i]);
}
        for(int i=0;i<n;i++){
            //thre is two approach jodi beautiful na hoy taile hoy eitay apply korbo naile porertay
            if(i%2==0){
                if(not(a[i]<a[i+1])){
                    if(i+1<n){
                        a[i+1] = prefMax[i+1];
                    }
                }
            }
            else{
                if(not(a[i]>a[i+1])){
                    a[i] = prefMax[i];
                }
            }
        }
        if(check_beautiful(a,n)){
            cout<<0<<endl;
            continue;
        }
        int how=0;
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(not(a[i]<a[i+1])){
                    how+=a[i+1]-a[i]+1;
                    a[i]=a[i]-(a[i+1]-a[i]+1);
                }
            }
            else{
                if(not(a[i]>a[i+1])){
                    how+=a[i+1]-a[i]+1;
                    a[i+1]-=a[i+1]-a[i]+1;
                }
            }
        }
        cout<<how<<endl;
    }
}