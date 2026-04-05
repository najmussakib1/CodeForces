#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check_palindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(check_palindrome(s)){
            cout<<0<<endl;
            continue;
        }
        int num= count(s.begin(),s.end(),'0');
        cout<<num<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
}