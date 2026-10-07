#include<iostream>
#include<algorithm>

#include<string>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a(n,0);
        stack<int>st;
        int i=1;
        for(auto c:s){
            if(c=='1'){
                st.push(i-1);
            }
            else if(c=='2'){
                if(st.empty()){
                    a[i-1]=1;
                }
                else{
                    a[st.top()]=1;
                    st.pop();
                }

            }
            else{
                a[i-1]=1;
            }
            i++;
        }
        cout<<count(a.begin(),a.end(),0)<<endl;
        for(int i=0;i<n;i++){
            if(a[i]==0) cout<<i+1<<" ";
        }
        cout<<endl;
    }
}