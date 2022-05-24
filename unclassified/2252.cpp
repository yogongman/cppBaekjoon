#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int arr[32002];
int res[32002];
vector<int> uv[32002];
int n,m;
queue<int> q;
int main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        arr[y]++;
        uv[x].push_back(y);
    }

    for(int i=1; i<=n; i++){ // queue에 간선 없는 것 push
        if(arr[i] == 0){
            q.push(i);
        }
    }

    for(int i=1; i<=n; i++){
        int x = q.front(); q.pop();
        res[i] =  x;
        
        for(auto j: uv[x]){
            if(--arr[j] == 0){
                q.push(j);
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}   