#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int min_1_count= count(b.begin(),b.end(),-1);
        set<int> that_x;
        
        if(min_1_count!=n){
            for(int i=0;i<n;i++){
                if(b[i]!=-1){
                    that_x.insert(a[i]+b[i]);
                    if(that_x.size()>1) break;
                }
            }
            if(that_x.size()>1) cout<<0<<endl;
            else{
                int canbe=1;
                for(int i=0;i<n;i++){
                    if(b[i]==-1){
                        int req=*that_x.begin()-a[i];
                        if(req>k || req<0) {
                            canbe=0;
                            break;
                        }
                    }
                }
                if(!canbe) cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
        else{
            auto min_a=min_element(a.begin(),a.end());
            int max_s=*min_a+k;
            auto max_a=max_element(a.begin(),a.end());
            cout<<max_s-*max_a+1<<endl;
        }
    }
}