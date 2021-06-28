#include<bits/stdc++.h>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
queue<pair<int,int>> Q;
vector<pair<int,int>> nb[10001];
int N;
int cnt = 0; 
int arr[103][103];
int num[103][103];
int visited[103][103];
int mn = 987654321;
int bfs(int n){
    queue<pair<int,int>> V;
    int dist = 0;
    for(auto i: nb[n]){
        V.push({i.first,i.second});
        visited[i.first][i.second] = 1;
    }
    
    while(!V.empty()){
        int q_size = V.size();
        for(int i=0; i<q_size; i++){
            auto cur = V.front(); V.pop();
            for(int j=0; j<4; j++){
                int nx = cur.first + dx[j];
                int ny = cur.second + dy[j];

                if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                if(arr[nx][ny] != 0 && arr[nx][ny] != n){
                    return dist;
                }
                else if(visited[nx][ny] == 0 && arr[nx][ny] == 0){
                    V.push({nx,ny});
                    visited[nx][ny] = 1;
                }

            }
        }
        // cout<<"\n\n"<<n<<"\n";
        // for(int i=0; i<N; i++){
        //     for(int j=0; j<N; j++){
        //         cout<<visited[j][i]<<" ";
        //     }
        //     cout<<"\n";
        // }
        dist++;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>arr[j][i];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arr[j][i] != 0 && visited[j][i] == 0){
                cnt++;
                Q.push({j,i});
                nb[cnt].push_back({j,i});
                arr[j][i] = cnt;
                visited[j][i] = 1;          
            }
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int i=0; i<4; i++){
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];
                    if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                    if(visited[nx][ny] == 1 || arr[nx][ny] == 0) continue;
                    Q.push({nx,ny});
                    visited[nx][ny] = 1;
                    arr[nx][ny] = cnt;
                    nb[cnt].push_back({nx,ny});
                }
            }
        }
    }
    for(int i=1; i<=cnt; i++){
        memset(visited,0,sizeof(visited));
        int a = bfs(i);
        if(mn>=a) mn = a;
    }
    cout<<mn;
    return 0;

}

//상당히 헤메었던 부분 : 섬의 개수는 101개가 최대가 아님 100 x 100이기 떄문에 101개는 너무 적음