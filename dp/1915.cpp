#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int arr[1002][1002];
int dp[1002][1002];
int n,m;
int main(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%1d",&arr[j][i]);
        }
    }
    int res = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[j][i] == 0) continue;
            dp[j][i] = min(min(dp[j-1][i-1],dp[j][i-1]),dp[j-1][i]) + 1;
            res = max(res,dp[j][i]);
        }
    }
    cout<<res*res;

    return 0;
}