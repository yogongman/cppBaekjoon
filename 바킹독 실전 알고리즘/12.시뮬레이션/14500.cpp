#include<bits/stdc++.h>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0}; 
int board[501][501]; //x, y 순서
int isused[501][501];
int n,m;
int arr[5];
int maxnum;
void exceptsh(int x,int y){ // x, y는 긴 막대 가운데 기준
    int s=0;
    // 1. ㅜ
    if(x>=1 && x<m-1 && y<n-1){
        s = max(s, board[x-1][y]+board[x][y]+board[x+1][y]+board[x][y+1]);
    }
    // 2. ㅏ
    if(x<m-1 && y>=1 && y<n-1){
        s = max(s,board[x][y]+board[x+1][y]+board[x][y-1]+board[x][y+1]);
    }
    // 3. ㅗ
    if(x>=1 && x<m-1 && y>=1){
        s = max(s,board[x][y]+board[x-1][y]+board[x+1][y]+board[x][y-1]);
    }
    // 4. ㅓ
    if(x>=1 && y>=1 & y<n-1){
        s = max(s,board[x][y]+board[x-1][y] + board[x][y-1] + board[x][y+1]);
    }
    maxnum = max(s,maxnum);
}
void dfs(int x, int y, int k, int s){
    if(k == 3){ 
        maxnum = max(s, maxnum);
        return;
    }
    for(int i=0; i<4; i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
        if(isused[nx][ny]) continue;   
        isused[nx][ny] = 1;
        dfs(nx,ny,k+1,s+board[nx][ny]);
        isused[nx][ny] = 0;
    }
}
int main(){
    
    cin>>n>>m; //n = y, m = x
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>board[j][i];
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<board[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            isused[j][i] = 1;
            dfs(j,i,0,board[j][i]);
            exceptsh(j,i);
            isused[j][i] = 0;

        }
    }
    // cout<<mx;
    cout<<maxnum;
}