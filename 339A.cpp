#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <int> nums;
    string _temp="";
    for (int i=0;i<s.length();i++){
        if(s[i]=='+'){
            nums.push_back(stoi(_temp));
            _temp="";
        }
        else{
            _temp+=s[i];
        }
    }
    nums.push_back(stoi(_temp));
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
        if(i!=nums.size()-1){
            cout<<"+";
        }
    }
}