#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
void dfs(map<int,set<int>>&adjacency_list,int u,map<int,bool>&viisted){
    viisted[u]=true;
    for(auto x:adjacency_list[u]){
        if(viisted[u]==false){
            dfs(adjacency_list,x,viisted);
        }
    }
}

int main(){
    int n;
    cin>>n;
    map<int,set<int>>adjacency_list;
    map<int,bool>visited;
    for(int i=0;i<n;i++){
        int a,b;

        cin>>a>>b;
        adjacency_list[a].insert(b);
        adjacency_list[b].insert(a);
        visited[a]=false;
        visited[b]=false;
    }
    for(auto x:adjacency_list){
        if(visited[x.first]==false){
            dfs(adjacency_list,x.first,visited);
        }
    }

}