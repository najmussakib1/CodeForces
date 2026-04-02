#include<iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++){
        if(s[i].length()>10){
            string abrv = s[i][0]+to_string(s[i].length()-2)+s[i][s[i].length()-1];
            cout<<abrv<<endl;
        }
        else{
            cout<<s[i]<<endl;
        }
    }
}