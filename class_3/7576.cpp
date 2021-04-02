#include<iostream>
#include<queue>
using namespace std;
int lo[1001][1001]={0,};
int visited[1001][1001]={0,};
int ans;
queue<pair<int,int>> tmp;
int main(){
    int m,n,x,y;
    cin>>m>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>lo[j][i];
            if(lo[j][i] ==1){
                tmp.push(pair<int,int>(j,i));
                visited[j][i]++;
            }
        }
    }
    while(!tmp.empty()){ 
        x = tmp.front().first;
        y = tmp.front().second;
        ans = visited[x][y]-1;
        tmp.pop();
        if(x-1>=0 && visited[x-1][y]==0 && lo[x-1][y] != -1){
            visited[x-1][y] = visited[x][y] + 1;
            tmp.push(pair<int,int>(x-1,y));
        }
        if(x+1<m && x+1<1001 && visited[x+1][y]==0 && lo[x+1][y] != -1){
            visited[x+1][y] = visited[x][y] + 1;
            tmp.push(pair<int,int>(x+1,y));
        }
        if(y-1>=0 && visited[x][y-1]==0 && lo[x][y-1] != -1){
            visited[x][y-1] = visited[x][y] + 1;
            tmp.push(pair<int,int>(x,y-1));
        }
        if(y+1<n && y+1<1001 && visited[x][y+1]==0 && lo[x][y+1] != -1){
            visited[x][y+1] = visited[x][y] + 1;
            tmp.push(pair<int,int>(x,y+1));
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[j][i] == 0 && lo[j][i] == 0){
                cout<<-1;
                return 0;
            }
        }
    }
    if(visited[x][y]==1){
        cout<<0;
        return 0;
    }
    cout<<ans;
    return 0;
}
// https://www.acmicpc.net/board/view/15466 변수 할당 공간에 따른 메모리 크기제한
// x,y 좌표 헷갈리지 말 것.