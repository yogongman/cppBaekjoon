#include<bits/stdc++.h>
using namespace std;
int N;
char tmp;
int visited[101][101];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int case1 =0,case2=0;
queue<pair<int,int>> Q;
string pic[101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>pic[i];
    }
    memset(visited,0,sizeof(visited));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(visited[i][j] == 0){
                case1++;
                Q.push({i,j});
                visited[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int i=0; i<4; i++){
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        pic[cur.first][cur.second];
                        if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                        if(visited[nx][ny] == 1 || pic[nx][ny] !=pic[cur.first][cur.second]) continue;
                        if(pic[nx][ny] != pic[cur.first][cur.second]) case1++;
                        Q.push({nx,ny});
                        visited[nx][ny] = 1;
                    }
                }
            }
        }
    } //적록색약 아닌 사람
    memset(visited,0,sizeof(visited));
    Q = queue<pair<int,int>>();
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            tmp = pic[i][j];
            if(tmp == 'R' || tmp == 'G') tmp = 'S';
            pic[i][j] = tmp;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(visited[i][j] == 0){
                case2++;
                Q.push({i,j});
                visited[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int i=0; i<4; i++){
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                        if(visited[nx][ny] == 1 || pic[nx][ny] != pic[cur.first][cur.second]) continue;
                        if(pic[nx][ny] != pic[cur.first][cur.second]) case1++;
                        Q.push({nx,ny});
                        visited[nx][ny] = 1;
                    }
                }
            }
        }
    } // 적록색약인 사람
    cout<<case1<<" "<<case2;
    return 0;
}