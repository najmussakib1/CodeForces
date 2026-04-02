#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string name;
        cin>>name;
        int count[]={0,0,0,0,0,0};//TIMURO
        for(auto c:name){
            if(c=='T') count[0]++;
            else if(c=='i') count[1]++;
            else if(c=='m') count[2]++;
            else if(c=='u') count[3]++;
            else if(c=='r') count[4]++;
            else count[5]++;
        }
        int not_cor=0;
        for(int i=0;i<=4;i++){
            if(count[i]!=1){
                not_cor=1;
                break;
            }
        }
        if(count[5]!=0) not_cor=1;
        if(not_cor) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}