#include<bits/stdc++.h>
using namespace std;
queue<int> Q;
stack<int> ans;
int visited[100001];
int a[100001];
int last = -1;
int tmp;
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
        last = cur;
        // cout<<cur<<" "<<cur[visited]<<"\n";
        if(cur == k){
            cout<<visited[cur]<<"\n";

            break;
        }
        int tp = cur*2;
        int b = cur-1;
        int f = cur+1;
        // cout<<visited[cur]<<" "<<cur<<"\n";
        if(tp<=k+1 && (visited[tp] == -1 || visited[tp] != 0)){
            visited[tp] = visited[cur] + 1;
            a[tp]=cur;
            Q.push(tp);
        }
        if(b>=0 && visited[b] == -1){
            visited[b] = visited[cur] + 1;
            a[b]=cur;
            Q.push(b);
        }
        if(f<=100001 && visited[f] == -1){
            visited[f] = visited[cur] + 1;
            a[f]=cur;
            Q.push(f);
        }
    }
    ans.push(last);
    while(visited[last]--){
        ans.push(a[last]);
        last = a[last];
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}