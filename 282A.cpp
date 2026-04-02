#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string opers[n];
    int x=0;
    for(int i=0;i<n;i++) cin>>opers[i];
    for(int i=0;i<n;i++){
        if(opers[i]=="X++" || opers[i]=="++X"){
            x++;
        }
        else if(opers[i]=="X--" || opers[i]=="--X"){
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}