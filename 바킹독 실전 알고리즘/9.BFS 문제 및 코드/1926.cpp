#include<bits/stdc++.h>
using namespace std;
int visited[501][501];
int arr[501][501];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int mx=0;
    int num=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j]||!arr[i][j]) continue;
            num++;
            queue<pair<int,int>> Q;
            visited[i][j] = 1;
            Q.push({i,j});
            int total=0;
            while(!Q.empty()){
                total++;
                pair<int,int> cur = Q.front();
                Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.first+dx[dir];
                    int ny = cur.second+dy[dir];
                    if(nx<0||ny<0||nx>=n||ny>=m) continue;
                    if(arr[nx][ny]!=1 || visited[nx][ny]) continue;
                    visited[nx][ny]=1;
                    Q.push({nx,ny});

                }
            }
            mx = max(total,mx);
        }
    }
    cout<<num<<"\n"<<mx;
}