#include<iostream>
using namespace std;
int n,m;
int arr[9];
int visited[9];
void bt(int k,int num){
    if(k==m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=num; i<=n; i++){
        if(1){
            arr[k] = i;
            visited[i] = 1;
            bt(k+1,i);
            visited[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    bt(0,1);
    return 0;
}