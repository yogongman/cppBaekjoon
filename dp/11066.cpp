#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int arr[501][501];
int ip[501];
int dp(int x, int y){
    if(x == y) return ip[x];
    if(arr[x][y] != -1){
        // cout<<x<<" "<<y<<" "<<arr[x][y]<<"\n";
        return arr[x][y];
    }
    int tmp_min = 999999999;
    int pre = 0;
    for(int i=x; i<=y; i++){
        pre += ip[i];
    }
    for(int i = x; i<y; i++){
        tmp_min = min(tmp_min, dp(x,i) + dp(i+1,y) + pre);
    }
    arr[x][y] = tmp_min;
    return tmp_min;
}

int main(){
    int T,K,tot = 0;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>K;
        tot = 0;
        memset(arr,-1,sizeof(arr));
        for(int j=0; j<K; j++){
            cin>>ip[j];
            tot += ip[j];
        }
        
        cout<<dp(0,K-1) - tot<<"\n";
    }
}