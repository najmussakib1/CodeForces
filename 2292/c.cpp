#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(n%2==0 && (s.find("00") != string::npos || s.find("11") != string::npos)){
            cout<<"YES"<<endl;
            
        }
        else cout<<"NO"<<endl;
    }

}