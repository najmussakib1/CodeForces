#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
class collection{
    private:
        int zeros;
        int start;
        int end;
    public:
        collection(int z,int s,int e){
            zeros=z;
            start=s;
            end=e;
        }
        int get_min(){
            if(start==1 && end==0){
                if(zeros-1==1) return 1;
                return (zeros-1)/2;
            }
            else if(start==0 && end==0){
                if(zeros==1 || zeros==2) return 1;
                return ceil(zeros/3.0);
            }
            else if(start==0 &&end==1){
                if(zeros-1==1) return 1;
                else return (zeros-1)/2;
            }
            else{
                if(zeros-2==1) return 1;
                else return (zeros-2)/2;
            }
        }
        int getzer(){
            return zeros;
        }
        int getst() {return start;}
        int getend() {return end;}
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int z=0;
        vector<collection> c;
        int n_of1 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i==0){
                }
                else{
                    if(z){
                        
                        if(c.size()==0){
                            c.emplace_back(collection(z,(s[0]=='0')?0:1,1));
                        }
                        else{
                            c.emplace_back(collection(z,1,1));
                        }
                    }
                    z=0;
                }
                n_of1++;
            }
            else{
                z++;
            }
        }
        if(z){
            c.emplace_back(collection(z,(s[0]=='0'&&c.size()==0)?0:1,0));
        }
        // for(auto x:c){
        //     cout<<x.getzer()<<" "<<x.getst()<<" "<<x.getend()<<endl;
        // }
        for(auto x:c){
            n_of1+=x.get_min();
        }
        cout<<n_of1<<endl;
    }
}