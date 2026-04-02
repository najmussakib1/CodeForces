#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    // if(s.length()%2==0) cout<<"CHAT WITH HER!";
    // else cout<<"IGNORE HIM!";
    vector <char> dist;
    for(int i=0;i<s.length();i++){
        int found=0;
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
            found=1;
            break;
            }
        }
        if(found==0){
            dist.push_back(s[i]);
        }
    }
    if(dist.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

}