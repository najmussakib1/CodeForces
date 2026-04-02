#include <iostream>
using namespace std;
bool isPrime(long long n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(long long i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(!isPrime(m)){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=n+1;i<m;i++){
            if(isPrime(i)){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
}