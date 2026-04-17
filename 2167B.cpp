#include <iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        set<char>s_c,t_c;
        for(auto x:s) s_c.insert(x);
        for(auto x:t) t_c.insert(x);
        if(s_c==t_c){
            int ans=1;
            for(auto x:s_c){
                int s_count=count(s.begin(),s.end(),x);
                int t_count=count(t.begin(),t.end(),x);
                if(s_count!=t_count){
                    ans=0;
                    break;

                }
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}