#include<bits/stdc++.h>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int n,m,p,tmpp,recnt,fcnt;
bool flag[11];
int mov[11];
int arr[1001][1001];
int cnt[11];
int visited[1001][1001];
queue<pair<int,int>> Q[10];
void bfs(int v){
    for(int i=0; i<mov[v]; i++){
        int size = Q[v].size();
        if(size == 0) return;
        while(size--){
            auto cur = Q[v].front(); Q[v].pop();
            int cx = cur.first,cy = cur.second;
            for(int i=0; i<4; i++){
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
                if(arr[nx][ny] == 0){
                    cnt[v] ++;
                    arr[nx][ny] = v;
                    recnt++;
                    Q[v].push({nx,ny});
                }
            }
        }
    }
    if(recnt == 0){
        flag[v] = true; // queue에 아무 변화가 없으면 true
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char tmp;
    cin>>n>>m>>p; // 세로, 가로, player수
    tmpp = p;
    for(int i=1; i<=p; i++){ // 플레이어별 움직임 횟수
        cin>>mov[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>tmp;
            if(tmp == '.') arr[j][i] = 0;
            else if(tmp == '#'){
                arr[j][i] = -1; 
            }
            else{
                // Q.push({j,i,tmp-'0'});
                arr[j][i] = tmp - '0';
                Q[arr[j][i]].push({j,i});
                cnt[tmp-'0']++;
                // cout<<pos[tmp-'0'].back().first<<pos[tmp-'0'].back().second;
            }
        }
    }
    while(1){
        fcnt = 0;
        for(int i=1; i<=p; i++){
            if(Q[i].empty()) fcnt++;
            else bfs(i);
        }
        if(fcnt == p) break;
    }
    for(int i=1; i<=p; i++){
        cout<<cnt[i]<<" ";
    }
}

// 고립될 경우 생각을 안 했음!!