#include<bits/stdc++.h>
using namespace std;
int l,r,c;
int visited[31][31][31]; // x,y,z;
int arr[31][31][31];
char tmp[31][31][31];
bool is;
queue<tuple<int,int,int>> Q;
int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {0,0,0,0,1,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        fill((int*)visited,(int*)(visited+31),0);
        fill((int*)arr,(int*)(arr+31),0);
        // 초기화 유의할 것
        is = false;
        cin>>c>>r>>l;
        if(c == 0 && r == 0 && l == 0) return 0;
        for(int z=0; z<c; z++){
            for(int y=0; y<r; y++){
                for(int x=0; x<l; x++){
                    cin>>tmp[x][y][z];
                    visited[x][y][z] = -1;
                    if(tmp[x][y][z] == 'S'){
                        visited[x][y][z] = 0;
                        Q.push({x,y,z});
                    }
                    if(tmp[x][y][z] == '#') {
                        arr[x][y][z] = -2; 
                    }
                    if(tmp[x][y][z] == 'E') arr[x][y][z] = -3;
                }
            }
        }
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            int curx,cury,curz;

            tie(curx,cury,curz) = cur;
            if(arr[curx][cury][curz] == -3){
                cout<<"Escaped in "<<visited[curx][cury][curz]<<" minute(s).\n";
                is = true;
            }
            for(int i=0; i<6; i++){
                int nx = curx + dx[i];
                int ny = cury + dy[i];
                int nz = curz + dz[i];
                if(nx<0 || ny<0 || nz<0 || nx>=l || ny>=r || nz>=c) continue;
                if(visited[nx][ny][nz] != -1 || arr[nx][ny][nz] == -2) continue;
                visited[nx][ny][nz] = visited[curx][cury][curz] + 1;
                Q.push({nx,ny,nz});
            }
        }
        if(!is) cout<<"Trapped!\n";
    }
}