#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int m,n,k;
int xy[50][50]={0};
int visited[50][50] = {0};
int drx[4] = {0,0,1,-1};
int dry[4] = {1,-1,0,0};

void dfs(int x, int y){
    for(int i=0; i<4; i++){
        int tmp_x = x + drx[i];
        int tmp_y = y + dry[i];
        if(tmp_x<0 || tmp_x>=m || tmp_y<0 || tmp_y>=n) continue;
        if( xy[tmp_x][tmp_y] && !visited[tmp_x][tmp_y]){
            visited[tmp_x][tmp_y]++;
            dfs(tmp_x,tmp_y);
        }
    }
}  
int main(){
    int t_c;
    int x,y;
    cin>>t_c;
    for(int j=0; j<t_c; j++){
        cin>> m>> n>> k;
        memset(xy, 0, sizeof(xy));
        memset(visited, 0, sizeof(visited));
        int cnt=0;
        for(int i=0; i<k; i++){
            cin>>x>>y;
            xy[x][y] = 1;
        }
        for(int i=0; i<m; i++){
            for(int z=0; z<n; z++){
                if(xy[i][z]&&!visited[i][z]){
                    cnt++;
                    visited[i][z]++;
                    dfs(i,z);
                }
            }
    }
    cout<<cnt<<"\n";
    }
    return 0;
}