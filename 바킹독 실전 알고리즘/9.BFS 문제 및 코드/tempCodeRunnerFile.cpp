#include<bits/stdc++.h>
using namespace std;
int arr[101][101][101];
int visited[101][101][101];
int dx[] = {0,0,1,-1,0,0};
int dy[] = {1,-1,0,0,0,0};
int dz[] = {0,0,0,0,1,-1};
int m,n,h;
int answer=0;
queue<tuple<int,int,int>> Q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n>>h;
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                int tmp;
                cin >> tmp;
                arr[j][k][i] = tmp;
                if(arr[j][k][i] == 1) Q.push({j,k,i});
                if(arr[j][k][i] == 0 ) visited[j][k][i] = -1;
                //익었을 경우 or 빈칸일 경우에는 0임
            }
        }
    }
    while(!Q.empty()){
        auto tmp = Q.front();
        Q.pop();
        int curx,cury,curz;
        curx = get<0>(tmp);
        cury = get<1>(tmp);
        curz = get<2>(tmp);
        for(int i=0; i<6; i++){
            int nx = curx + dx[i];
            int ny = cury + dy[i];
            int nz = curz + dz[i];
            if(nx<0 || ny<0 || nz<0 || nx>=m || ny>=n || nz>=h) continue;
            if(visited[nx][ny][nz] >=0 ) continue;
            //익은 토마토는 큐에 들어가있고, 빈칸인 경우에는 패스
            // 17번 줄에서 익지않은 토마토는 -1로 예외처리 해둠
            visited[nx][ny][nz] = visited[curx][cury][curz] + 1;
            Q.push({nx,ny,nz});
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(visited[j][k][i]==-1){
                    cout<<-1;
                    return 0;
                }
                answer = max(answer,visited[j][k][i]);
            }
        }
    }
cout<<answer;

}