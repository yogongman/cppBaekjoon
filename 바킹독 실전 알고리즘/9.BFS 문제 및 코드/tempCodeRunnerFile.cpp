#include<bits/stdc++.h>
using namespace std;
queue<int> Q;
int visited[100001];
int n,k;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    fill(visited,visited+100001,-1);
    Q.push(n);
    visited[n] = 0;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        if(cur == k){
            cout<<visited[cur];
            return 0;
        }
        int tp = cur*2;
        int b = cur-1;
        int f = cur+1;
        cout<<visited[cur]<<" "<<cur<<"\n";
        if(tp<=100001 && (visited[tp] == -1 || visited[tp] == 0)){
            visited[tp] = visited[cur];
            Q.push(tp);
        }
        if(b>=0 && visited[b] == -1){
            visited[b] = visited[cur] + 1;
            Q.push(b);
        }
        if(f<=100001 && visited[f] == -1){
            visited[f] = visited[cur] + 1;
        }
        
    }
}