#include <iostream>
#include<string>
using namespace std;
void lower(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+32;
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    lower(s1);
    lower(s2);
    if(s1==s2){
        cout<<0;
    }
    else if(s1<s2){
        cout<<-1;
    }
    else{
        cout<<1;
    }
}