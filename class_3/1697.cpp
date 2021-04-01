#include<iostream>
#include<queue>
using namespace std;
int visited[100001];
int ans;
queue<int> q;
int main(){
    int n,k,tmp;
    cin>>n>>k;
    visited[n] = 1;
    q.push(n);
    while(!q.empty()){

        tmp = q.front();
        if(tmp == k){
            ans = visited[tmp]-1;
            break;
        }
        q.pop();
        if(tmp-1>=0 && !visited[tmp-1]){
            visited[tmp-1] = visited[tmp]+1;
            q.push(tmp-1);
        }
        if(tmp+1<100001 && !visited[tmp+1]){
            visited[tmp+1]  = visited[tmp]+1;
            q.push(tmp+1);
        }
        if(tmp*2<100001 && !visited[tmp*2]){
            visited[tmp*2] = visited[tmp]+1;
            q.push(tmp*2);
        }
    }
    cout<<ans;
}