#include<iostream>
#define inf 2147000000;
using namespace std;
int v,e;
int arr[20000][20000];
int u,v,w,f;
int ds[20001];
int visited[20001];
void dp(int start){
    int min = 0;
    for(int i=1; i<=u; i++){
        if(!arr[start][i]&&ds[i]>arr[start][i]){
            ds[i] = arr[start][i];
        }
    }


}
int main(){
    int n;
    cin>>v>>e;
    cin>>f;
    n =f;
    for(int i=0; i<e; i++){
        cin>>u>>v>>w;
        arr[u][v] = w;
    }
    for(int i=0; i<=20001; i++){
        ds[i] = inf;
    }

    
    
    
}