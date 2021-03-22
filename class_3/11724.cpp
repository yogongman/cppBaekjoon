#include<iostream>
#include<vector>
using namespace std;
vector<int>net[1001];
int num;
int answer=0;
int check[1001];

void dfs(int n){
    if(check[n]) return;
    check[n] = 1;
    for(int i=0; i<net[n].size(); i++){
        int y = net[n][i];
        dfs(y);
    }
}
int main(){
    int n,m,u,v;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        net[u].push_back(v);
        net[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!check[i]){
            answer++;
            dfs(i);
        }
    }
    cout<<answer;
    return 0;
}