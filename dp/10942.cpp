#include<iostream>
using namespace std;
int n,m;
int arr[2002];
int dp[2002][2002];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++){
        dp[i][i] = 1;
    }
    for(int i=1; i<=n-1; i++){
        if(arr[i] == arr[i+1]) dp[i][i+1] = 1;
    }

    for(int i=2; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            if(arr[j] == arr[j+i]) dp[j][j+i]  = dp[j+1][j+i-1];
        }
    }

    cin>>m;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        cout<<dp[x][y]<<"\n";
    }
    return 0;
}