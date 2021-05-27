#include<bits/stdc++.h>
using namespace std;
int visited[26][26];
int arr[26][26];
int n,area;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vector<int> num;
queue<pair<int,int>> Q;
string tmp;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        for(int j=0; j<n; j++){
            arr[j][i] = tmp[j] - '0';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            area = 0;
            if(arr[j][i] == 0 || visited[j][i] == 1) continue;
            Q.push({j,i});
            visited[j][i] = 1;
            area = 1;
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int i=0; i<4; i++){
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];
                    if(nx<0||ny<0||nx>=n||ny>=n) continue;
                    if(visited[nx][ny] == 1 || arr[nx][ny] == 0) continue;
                    Q.push({nx,ny});
                    visited[nx][ny] = 1;
                    area++;
                }
            }
            if(area != 0) num.push_back(area); 
        }
    }
    cout<<num.size()<<"\n";
    sort(num.begin(), num.end());
    for(auto i: num){
        cout<<i<<"\n";
    }

}