#include<bits/stdc++.h>
using namespace std;
int f,s,g,u,d;
queue<int> Q;
int visited[1000001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>f>>s>>g>>u>>d;
    Q.push(s);
    fill(visited,visited+1000001,-1);
    visited[s] = 0;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        if(cur == g){
            cout<<visited[cur];
            return 0;
        }
        int up = cur+u;
        int down = cur-d;
        if(up<=f && up>=1 && visited[up] == -1){
            Q.push(up);
            visited[up] = visited[cur] + 1;
        }
        if(down<=f && down>=1 && visited[down] == -1){
            Q.push(down);
            visited[down] = visited[cur] + 1;
        }
    }
    cout<<"use the stairs";
}