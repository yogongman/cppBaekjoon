#include<bits/stdc++.h>
using namespace std;
int cnt;
int ccnt; // 4방향 탐색
int d;
// 북 동 서 남 <-> 0, 1, 2, 3
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
int n,m; //y, x
int r,c; //y, x
int board[52][52];
bool stop = false;
void rot(){ //좌측 회전
    if(d == 0){
        d = 3;
    }
    else{
        d -= 1;
    }
}
void go(){ // 전진 (공간 확보 해놓음)
    c += dx[d];
    r += dy[d];
}
bool search(){ //바라보는 방향에 청소가 안 되어있고, 벽이 아니면 true 반환 => 0이면 true 반환
    int nx = dx[d] + c;
    int ny = dy[d] + r;
    if(nx<0 || nx>=m || ny<0 || ny>=n) return false;
    if(board[nx][ny] == 0) return true;
    else return false;
}
void first(){
    // cout<<c<<" "<<r<<"\n";
    if(board[c][r] == 0){
        cnt++;
        board[c][r] = 2;
    }
}
void second(){
    ccnt = 0;
    while(1){
        if(ccnt == 4) break;
        rot();
        if(search()){
            go();
            first();
            break;
        }
        else{
            ccnt++;
        }
    }
    if(ccnt == 4){
        int nx = c - dx[d];
        int ny = r - dy[d];
        if(nx<0 || ny<0 || nx>=m || ny>=n || board[nx][ny] == 1){
            stop = true;
        }
        else{
            c = nx;
            r = ny;
            //후진
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m; //y, x
    cin>>r>>c>>d; //y, x, d
    for(int i=0; i<n; i++){ //y
        for(int j=0; j<m; j++){ //x 
            cin>>board[j][i]; //j = x, i = y
        }
    }
    while(!stop){
        first();
        second();
    }
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cout<<board[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<cnt;
}