#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Array_Elem{
    public:
        int data;
        int color; //0-red, 1-blue
        Array_Elem(int d,int c){
            data=d;
            color=c;
        }
};
bool compare(Array_Elem a, Array_Elem b){
    return a.data>b.data;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<Array_Elem> collections_red_age;
        vector<Array_Elem> collections_blue_age;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            collections_red_age.emplace_back(Array_Elem(x,(i%2==0)?0:1));
            collections_blue_age.emplace_back(Array_Elem(x,(i%2==0)?1:0));
        }
        sort(collections_red_age.begin(),collections_red_age.end(),compare);
        sort(collections_blue_age.begin(),collections_blue_age.end(),compare);
        int not_c_red=0;
        for(int i=1;i<n;i++){
            if(collections_red_age[i].color==collections_red_age[i-1].color){
                not_c_red=1;
                break;
            }
        }
        int not_c_blue=0;
        for(int i=1;i<n;i++){
            if(collections_blue_age[i].color==collections_blue_age[i-1].color){
                not_c_blue=1;
                break;
            }
        }
        if(!not_c_blue || !not_c_red) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}