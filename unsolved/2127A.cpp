#include<iostream>
#include <algorithm>
#include <set>
using namespace std;
int mex(int a, int b, int c){
    set<int> s = {a,b,c};
    for(int i=0;;i++){
        if(!s.count(i)) return i;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=1;
        for(int i=0;i<=n-3;i++){
            // i,i+1,i+2
            if(a[i]>=0 && a[i+1]>=0 && a[i+2]>=0){
                if(mex(a[i],a[i+1],a[i+2])==max({a[i],a[i+1],a[i+2]})-min({a[i],a[i+1],a[i+2]})){
                    // cout<<mex(a[i],a[i+1],a[2+i])<<endl;
                    continue;
                }
                else{
                    ans=0;
                    break;
                }
            }
            if(a[i]==-1 && a[i+1]==-1 && a[i+2]==-1){
                continue;
            }
            //1 ta -1 baki duita same
            int p[]={a[i],a[i+1],a[i+2]};
            sort(p,p+3);
            if(p[0]==-1 && p[1]==p[2]){
                if(p[1]==0){
                    ans=0;
                    break;
                }
                continue;
            }
            else if(p[0]==-1 && p[1]!=p[2] && p[1]!=-1 &&p[2]!=-1){
                ans=0;
                break;
            }
            if(p[0]==p[1] &&p[0]==-1 && p[2]!=-1){
                if(p[2]>=1){
                    continue;
                }
                ans=0;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}