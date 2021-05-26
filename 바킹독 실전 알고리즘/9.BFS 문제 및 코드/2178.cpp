#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int dist[101][101];
string arr[101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) fill(dist[i],dist[i]+m,-1);
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dist[0][0] = 0;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first+dx[dir];
            int ny = cur.second+dy[dir];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(dist[nx][ny] >= 0 || arr[nx][ny] != '1') continue;
            dist[nx][ny] = dist[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }
    cout<<dist[n-1][m-1]+1;
}