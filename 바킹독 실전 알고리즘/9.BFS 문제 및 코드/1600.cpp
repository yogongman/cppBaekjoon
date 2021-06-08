#include<bits/stdc++.h>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dx1[] = {2,1,-1,-2,-2,-1,1,2};
int dy1[] = {1,2,2,1,-1,-2,-2,-1};
int visited[201][201][32];
int arr[201][201];
queue<pair<pair<int,int>,int>> Q;
int k,w,h;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>k>>w>>h;
    fill((int*)visited,(int*)(visited+201),-1);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>arr[j][i];
        }
    }
    Q.push({{0,0},k});
    visited[0][0][k] = 0;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        // cout<<visited[cur.first.first][cur.first.second][cur.second]<<" "<<cur.first.first<<" "<<cur.first.second<<" "<<cur.second<<"\n";

        if(cur.first.first == w-1 && cur.first.second == h-1){
            cout<<visited[cur.first.first][cur.first.second][cur.second];
            return 0;
        }
        if(cur.second >= 1){
            for(int i=0; i<6; i++){
                int nx = cur.first.first + dx1[i];
                int ny = cur.first.second + dy1[i];
                if(nx<0 || ny<0 || nx>=w || ny>=h) continue;
                if(arr[nx][ny] == 1 || visited[nx][ny][cur.second-1] > -1 || visited[nx][ny][cur.second+1]>-1) continue;
                visited[nx][ny][cur.second-1] = visited[cur.first.first][cur.first.second][cur.second] + 1;
                Q.push({{nx,ny},cur.second-1});
            }
        }
        for(int i=0; i<4; i++){
            int nx = cur.first.first + dx[i];
            int ny = cur.first.second + dy[i];
            if(nx<0 || ny<0 || nx>=w || ny>=h) continue;
            if(arr[nx][ny] == 1 || visited[nx][ny][cur.second] > -1) continue;
            visited[nx][ny][cur.second] = visited[cur.first.first][cur.first.second][cur.second] + 1;
            Q.push({{nx,ny},cur.second});
        }
    }
    cout<<-1;
}