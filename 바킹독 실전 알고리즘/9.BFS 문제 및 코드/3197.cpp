#include<bits/stdc++.h>
using namespace std;
string inp;
int r,c;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int arr[1501][1501];
int visited[1501][1501];
vector<pair<int,int>> white;
queue<pair<int,int>> Q;
queue<pair<int,int>> nxQ;
queue<pair<int,int>> water;
queue<pair<int,int>> nxwater;
int day;
int x=3;
int main(){
    cin>>r>>c;
    int w = r;
    for(int i=0; i<r; i++){
        cin>>inp;
        for(int j=0; j<c; j++){
            if(inp[j] == '.'){
                arr[j][i] = 0;
                water.push({j,i});
            }
            else if(inp[j] == 'X') arr[j][i] = -1;
            else{
                white.push_back({j,i});
                water.push({j,i});
                arr[j][i] = 1;
            }
        }
    }
    Q.push(white.front());
    visited[Q.front().first][Q.front().second] = 1;
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }
    while(1){  
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();  
            // cout<<"\n";
            // cout<<cur.first<<" "<<cur.second<<"/"<<white.back().first<<" "<<white.back().second<<"\n";
            if(cur.first == white.back().first && cur.second == white.back().second){
                cout<<day;
                return 0;
            }
            for(int i=0; i<4; i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if(nx<0 || ny<0 || nx>=c || ny>=r) continue;
                if(visited[nx][ny] == 1) continue;
                if(arr[nx][ny] == 0 || arr[nx][ny] == 1){
                    Q.push({nx,ny});
                    visited[nx][ny] = 1;
                } 
                if(arr[nx][ny] == -1){
                    nxQ.push({nx,ny});
                    visited[nx][ny] = 1;
                }
            }
        }
        while(!water.empty()){
            auto cur = water.front(); water.pop();
            for(int i=0; i<4; i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if(nx<0 || ny<0 || nx>=c || ny>=r) continue;
                if(arr[nx][ny] == -1){
                    nxwater.push({nx,ny});
                    arr[nx][ny] = 0;
                }
            }
        }
        // cout<<"\n";
        water = nxwater;
        while(!nxwater.empty()) nxwater.pop();
        Q = nxQ;
        while(!nxQ.empty()) nxQ.pop();
        day++;
        // for(int i=0; i<r; i++){
        //     for(int j=0; j<c; j++){
        //         cout<<arr[j][i]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
    
}