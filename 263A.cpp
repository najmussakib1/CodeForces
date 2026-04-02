#include <iostream>
using namespace std;
int main(){
    int mat[5][5];
    int one_r,one_c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                one_r=i;
                one_c=j;
            }
        }
    }
    int ops = abs(one_r-2)+abs(one_c-2);
    cout<<ops<<endl;

}