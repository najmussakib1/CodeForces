#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int total=0;
        for(int i=0;i<n;i++){
            int age_aise = 0;
            for(int j=i-1;j>=0;j--){
                if(s[j]==s[i]){
                    age_aise=1;
                    break;
                }
            }
            if(age_aise){
                total++;
            }
            else{
                total+=2;
            }
        }
        cout<<total<<endl;

    }
}