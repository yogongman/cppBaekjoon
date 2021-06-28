#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a,b;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int arr[102][102];
int visited[102][102];
int cnt = 1;
vector<pair<int,int>> g[102][102];
queue<pair<int,int>> Q;
int main(){
    cin>>n>>m;
    while(m--){
        cin>>x>>y>>a>>b;
        g[x][y].push_back({a,b});
    }
    Q.push({1,1});
    visited[1][1] = 2;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(auto a: g[cur.first][cur.second]){
            if(!visited[a.first][a.second]){
                for(int i=0; i<4; i++){
                    int qnx = a.first + dx[i];
                    int qny = a.second + dy[i];
                    if(visited[qnx][qny] == 2){
                        Q.push({qnx,qny});
                        break;
                    }
                }
                visited[a.first][a.second] = 1;
                cnt++;
            }
        }
        for(int i=0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(visited[nx][ny] == 1){
                visited[nx][ny] = 2;
                Q.push({nx,ny});
            }
            
        }

    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<visited[j][i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<cnt;
    
}