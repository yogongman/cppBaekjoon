#include<bits/stdc++.h>
using namespace std;
int visited[101][101];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int m,n,k;
int arr[101][101];
queue<pair<int,int>> Q;
vector<int> area;
int atmp;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n>>k;
    int x1,x2,y1,y2;
    while(k--){
        cin>>x1>>y1>>x2>>y2;
        x1++;
        y1++;
        for(int j=y1; j<=y2; j++){
            for(int i=x1; i<=x2; i++){
                arr[i][j] = 1;
            }
        }    
        // for(int i=m; i>=0; i--){
        //     for(int j=0; j<=n; j++){
        //         cout<<arr[j][i]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            atmp=0;
            if(visited[j][i] == 0 && arr[j][i] != 1){
                Q.push({j,i});
                visited[j][i] = 1;
                atmp = 1;
            }
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                int curx = cur.first ,cury = cur.second;
                for(int i=0; i<4; i++){
                    int nx = curx + dx[i];
                    int ny = cury + dy[i];
                    if(nx<1 || ny < 1 || nx>n || ny>m) continue;
                    if(visited[nx][ny] != 0 || arr[nx][ny] == 1) continue;
                    Q.push({nx,ny});
                    visited[nx][ny] = 1;
                    atmp++;
                }
            }
            if(atmp!=0) area.push_back(atmp);
        }
    }
    cout<<area.size()<<"\n";
    sort(area.begin(),area.end());
    for(auto q: area){
        cout<<q<<" ";
    }

    
    // int atmp;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if(visited[i][j]==0&&arr[i][j]==1){
    //             Q.push({i,j});
    //             int atmp = 1;
    //         }
    //         while(!Q.empty()){
    //             auto tmp = Q.front(); Q.pop();
    //             atmp++;
    //             int nx,ny;
    //             for(int dir = 0; dir<4; dir++){
    //                 nx = tmp.first + dx[dir];
    //                 ny = tmp.second + dy[dir];
    //                 if(nx<1||ny<1||nx>n||ny>m) continue;
    //                 if(visited[nx][ny]!=0 || arr[i][j] == 0) continue;
    //                 visited[nx][ny] = 1;
    //                 Q.push({nx,ny});
    //             }
    //         }
    //         area.push_back(atmp);
    //     }
    // }
    // for(auto i: area){
    //     cout<<i<<"\n";
    // }
    // cout<<"\n";
    // cout<<"\n";
    // for(int i=m; i>=0; i--){
    //         for(int j=0; j<=n; j++){
    //             cout<<visited[j][i]<<" ";
    //         }
    //         cout<<"\n";
    //     }
}