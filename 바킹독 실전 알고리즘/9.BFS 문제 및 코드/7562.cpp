#include<bits/stdc++.h>
using namespace std;
int n,l;
int knight[2], mov[2];
int visited[301][301];
int dx[] = {2,1,-1,-2,-2,-1,1,2};
int dy[] = {1,2,2,1,-1,-2,-2,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--){
        memset(visited,0,sizeof(visited));
        queue<pair<int, int>> Q;
        cin>>l;
        cin>>knight[0]>>knight[1];
        cin>>mov[0]>>mov[1];
        if(knight[0] == mov[0] && knight[1] == mov[1]){
            cout<<0<<"\n"; // 개행 안 해서 틀렸음
            continue;
        }
        Q.push({knight[0],knight[1]});
        visited[knight[0]][knight[1]] = 1;
        while(!Q.empty()){
            auto cur = Q.front();Q.pop();
            if(cur.first == mov[0] && cur.second == mov[1]){
                cout<<visited[cur.first][cur.second]-1;
                break;
            }
            for(int i=0; i<8; i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if(nx<0||ny<0||l<=nx||l<=ny) continue;
                if(visited[nx][ny] >= 1) continue;

                Q.push({nx,ny});
                visited[nx][ny] = visited[cur.first][cur.second] + 1;
            }
        }
        // for(int i=l-1; i>=0; i--){
        //     for(int j=0; j<l; j++){
        //         cout<<visited[j][i];
        //     }
        //     cout<<"\n";
        // }
        cout<<"\n";
        Q = queue<pair<int,int>>();
    }
    
}