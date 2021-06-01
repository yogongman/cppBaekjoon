#include<bits/stdc++.h>
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int n,m;
int answer = 0; //녹는데 걸리는 시간
int a; // 분리된 빙산의 개수
int arr[301][301];
int visited[301][301];
int tmp_arr[301][301];
int cnt;
queue<pair<int,int>> Q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<m; j++){
            cin>>arr[j][i];
            tmp_arr[j][i] = arr[j][i];
        }
    }
    while(1){
        a=0;
        cnt = 0;
        memset(visited,0,sizeof(visited));
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<m; j++){
                if(arr[j][i] != 0 && visited[j][i] != 1){
                    a++;
                    Q.push({j,i});
                    visited[j][i] = 1;
                    while(!Q.empty()){
                        auto cur = Q.front(); Q.pop();
                        for(int i=0; i<4; i++){
                            int nx = cur.first + dx[i];
                            int ny = cur.second + dy[i];
                            if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
                            if(arr[nx][ny] == 0){
                                if(tmp_arr[cur.first][cur.second]!=0){
                                    tmp_arr[cur.first][cur.second]--;
                                }
                            }
                            if(arr[nx][ny] == 0 || visited[nx][ny] == 1) continue;
                            Q.push({nx,ny});
                            visited[nx][ny] = 1;
                        } 
                    }
                }
            }
        }
        if(a==1){
            answer++;
        }
        else if(a>1){
            cout<<answer;
            return 0;
        }
        else{
            cout<<0;
            return 0;
        }
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<m; j++){
                arr[j][i] = tmp_arr[j][i];
            }
        }

    }
}