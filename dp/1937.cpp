#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int arr[501][501];
int dp[501][501];
int visited[501][501];
int n;
int dfs(int x, int y){
    if(dp[x][y] != 0) return dp[x][y];
    int mx = 0;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
        if(arr[nx][ny] <= arr[x][y]) continue;
        mx = max(mx, dfs(nx,ny));
    }
    if(mx == 0){
        dp[x][y] = 1;
        return 1;
    }
    else{
        dp[x][y] = mx + 1;
        return dp[x][y];
    }
}
int main(){
    cin>>n;
    int res = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            res = max(res,dfs(j,i));
        }
    }
    cout<<res;
}