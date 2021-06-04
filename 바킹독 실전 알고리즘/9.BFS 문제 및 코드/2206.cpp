#include<bits/stdc++.h>
using namespace std;
int visited[1001][1001][2];
int arr[1001][1001];
string stmp;
queue<pair<pair<int,int>,int>> Q;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>stmp;
        for(int j=0; j<m; j++){
            arr[j][i] = stmp[j]-'0';
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<< arr[j][i] ;
    //     }
    //     cout<<"\n";
    // }
    Q.push({{0,0},0}); // x,y,부순 적 없음 push  # 0-> 부순 적 없음, 1 -> 부순 적 있음
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        // cout<<cur.first.first<<cur.first.second<<cur.second<<"\n";
        if(cur.first.first == m-1 && cur.first.second == n-1){
            cout<<visited[cur.first.first][cur.first.second][cur.second] + 1;
            return 0;
        }
        for(int i=0; i<4; i++){
            int nx = cur.first.first + dx[i];
            int ny = cur.first.second + dy[i];
            if(nx<0 || ny<0 || nx>=m || ny >=n) continue;
            if(visited[nx][ny][cur.second] >= 1) continue;
            if(arr[nx][ny] == 1){ // 벽일 때
                if(cur.second == 1){ // 벽을 부순 적 있다면
                    continue;
                }
                else if(cur.second == 0){ //벽을 부순 적 없으면
                    visited[nx][ny][1] = visited[cur.first.first][cur.first.second][0] + 1;
                    Q.push({{nx,ny},1});
                }
            }
            else if(arr[nx][ny] == 0){
                visited[nx][ny][cur.second] = visited[cur.first.first][cur.first.second][cur.second] +1;
                Q.push({{nx,ny},cur.second});
            }
        }
    }
    cout<<-1;
}