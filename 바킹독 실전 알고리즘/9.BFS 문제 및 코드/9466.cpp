#include<bits/stdc++.h>
using namespace std;
stack<int> S;
stack<int> tmp;
int arr[100001];
bool visited[100001];
int cnt;
bool isT[100001];
void dfs(int N){
    // cout<<N<<" ";
    visited[N] = true;
    int nxt = arr[N];
    if(!visited[nxt]){
        dfs(nxt);
    }
    else{
        if(!isT[nxt]){
            for(int i = nxt; i!=N; i = arr[i]){
                cnt++;
            }
            cnt++;
        }
    }
    isT[N] = true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,n;
    cin>>T;
    while(T--){
        memset(arr,0,sizeof(arr));
        memset(visited,0,sizeof(visited));
        memset(isT,0,sizeof(isT));
        cnt = 0;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++){
            if(!visited[i]) dfs(i);
        }
        cout<<n-cnt<<"\n";
    }
}