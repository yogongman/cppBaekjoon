#include<iostream>
#include<vector>
using namespace std;
vector<int> arr[100001];
int visited[100001]={0, };
int pa[100001];
void dfs(int k){
    visited[k] = 1;
    for(int i=0; i<arr[k].size(); i++){
        if(!visited[arr[k][i]]){
            pa[arr[k][i]] = k;
            dfs(arr[k][i]);
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a,b,n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1);
    for(int i=2; i<=n; i++){
        cout<<pa[i]<<"\n";
    }
}