#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
vector<vector<int>> a(5001);
queue<int> q;
int cnt[101] = {0,};
int visited[102];
void bfs(int n){
    q.push(n);
    visited[n] = 0;
    while(!q.empty()){
        int tmp  = q.front(); q.pop();
        for(int i: a[tmp]){
            if(visited[i] != -1) continue;
            visited[i] = visited[tmp] + 1;
            q.push(i);
        }
    }
}
int main(){
    int n,m;
    int u,v;
    int min = 5001, idx;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        memset(visited,-1,sizeof(visited));
        bfs(i);
        int kb = 0;
        for(int j=1; j<=n; j++){
            kb += visited[j];
        }
        cnt[i] = kb;
    }
    for(int i=n; i>0; i--){
        if(min>=cnt[i]){
            min = cnt[i];
            idx = i;
        }
    }
    cout<<idx;
    return 0;
}