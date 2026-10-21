#include<iostream>
#include<string>
#include<set>
using namespace std;
string get_maximal(string s){
    string ans="";
    ans.push_back(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<string> st;
        st.insert(get_maximal(s));
        for(int i=1;i<=s.length()-2;i++){
            if(s[i]=='0'){
                s[i]='1';
                st.insert(get_maximal(s));
                s[i]='0';
            }
            else{
                s[i]='0';
                st.insert(get_maximal(s));
                s[i]='1';
            }
        }
        cout<<st.size()<<endl;
    }
}