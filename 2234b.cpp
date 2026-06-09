#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isPalindromeStringWay(long long num) {
    if (num < 0) return false;

    string originalStr = std::to_string(num);
    string reversedStr = originalStr;
    
    // Reverse the copy string
    reverse(reversedStr.begin(), reversedStr.end());

    return originalStr == reversedStr;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int ans=0;
        for(long long i=(n-n%12);i>=0;i-=12){
            if(isPalindromeStringWay(n-i)){
                cout<<n-i<<" "<<i<<endl;
                ans=1;
                break;
            }
        }
        if(!ans){
            cout<<-1<<endl;
        }
    }
}