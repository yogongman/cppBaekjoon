#include<bits/stdc++.h>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int fire[1001][1001];
int jh[1001][1001];
int r,c,N,answer;
bool escape;
string inp[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    while(N--){
        escape = false;
        cin>>c>>r;
        for(int i=0; i<r; i++){
            fill(fire[i],fire[i]+c,-1);
            fill(jh[i],jh[i]+c,-1);
        }
        for(int i=0; i<r; i++){
            cin>>inp[i];
        }
        queue<pair<int,int>> Q1; // jh
        queue<pair<int,int>> Q2; // fire
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(inp[i][j]=='@'){
                    Q1.push({i,j});
                    jh[i][j] = 0;

                } 
                if(inp[i][j] == '*'){
                    Q2.push({i,j});
                    fire[i][j] = 0;
                } 
            }
        }
        while(!Q2.empty()){ //fire BFS
            pair<int,int> cur;
            cur = Q2.front();
            Q2.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if(nx>=r || nx<0 || ny<0 || ny>=c) continue;
                if(fire[nx][ny] >= 0 || inp[nx][ny] == '#') continue;
                fire[nx][ny] = fire[cur.first][cur.second] + 1;
                Q2.push({nx,ny});
            }
        }
        while(!Q1.empty()){ //jh BFS
            pair<int,int> cur2;
            cur2 = Q1.front();
            Q1.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur2.first + dx[dir];
                int ny = cur2.second + dy[dir];
                if(nx>=r || nx<0 || ny<0 || ny>=c){
                    answer = jh[cur2.first][cur2.second]+1;
                    escape = true;
                    break;
                }
                if(escape) break;
                if(jh[nx][ny] >= 0 || inp[nx][ny] == '#') continue;
                if(fire[nx][ny] != -1 && fire[nx][ny] <= jh[cur2.first][cur2.second]+1) continue;
                jh[nx][ny]  = jh[cur2.first][cur2.second] + 1;
                Q1.push({nx,ny});
            }
            if(escape) break;
        }
        if(escape) cout<<answer<<"\n";
        else cout<<"IMPOSSIBLE\n";
    }
}