#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
vector<vector<int>>a(1002);
queue<int> q;
int visited[1002];
void dfs(int n){
    if(visited[n] != 1){
        cout<<n<<" ";
        visited[n] = 1;
    }
    // for(int i=0; i<a[n].size(); i++){
    //     cout<<a[n][i]<<" ";
    // }
    // cout<<"\n";
    for(int i=0; i<a[n].size(); i++){
        if(visited[a[n][i]] == 0){
            dfs(a[n][i]);
        }
    }
}
void bfs(){
    while(!q.empty()){
        int f = q.front();  q.pop();
        if(visited[f]) continue;
        visited[f] = 1;
        cout<<f<<" ";
        for(int i=0; i<a[f].size(); i++){
            if(visited[a[f][i]]) continue;
            q.push(a[f][i]);
        }
    }
}
int main(){
    int n,m,p;
    int u,v;
    cin>>n>>m>>p;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        sort(a[i].begin(),a[i].end());
    }
    q.push(p);
    memset(visited,0,sizeof(visited));
    dfs(p);
    cout<<"\n";
    memset(visited,0,sizeof(visited));
    bfs();
    return 0;
}