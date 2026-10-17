#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x&1)o++;
            else e++;
        }
        if((e==1 &&o==1)||(e==0&&o==3)){
            cout<<"Larpity"<<endl;
        }
        else cout<<"Moggity"<<endl;
    }
}