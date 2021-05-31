#include<bits/stdc++.h>
using namespace std;
int arr[101][101];
int visited[101][101];
int n,max1=0,answer=0;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int tmp;
queue<pair<int,int>> Q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            cin>>tmp;
            max1 = max(max1,tmp);
            arr[j][i] = tmp;
            // cout<<j<<i<<" ";
        }
    }
    max1--;
    
    while(1){
        if(max1 == -1) break;
        memset(visited,0,sizeof(visited));
        int htmp = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[j][i] > max1 && visited[j][i] == 0){
                    Q.push({j,i});
                    visited[j][i] = 1;
                    // cout<<i<<j<<" ";
                    htmp++;
                }
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int i=0; i<4; i++){
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
                        if(visited[nx][ny] == 1 || arr[nx][ny]<=max1) continue;
                        Q.push({nx,ny});
                        visited[nx][ny] = 1;
                    }
                }
            }
        }
        answer = max(answer,htmp);
        // cout<<answer<<"\n";
        max1--;
    }
    cout<<answer;
}