#include<iostream>
#include<cstring>
using namespace std;
long long int dp[1<<11][102][10];
int n;
long long int dfs(int field, int cur, int num){
    if(dp[field][cur][num] != -1) return dp[field][cur][num];
    if(cur == 0){
        if(field == (1<<10)-1){
            dp[field][cur][num] = 1;
            return 1;
        }
        else{
            dp[field][cur][num] = 0;
            return 0;
        }

    }
    dp[field][cur][num] = 0;
    int next = num + 1;
    if(next<10){
        dp[field][cur][num] += dfs(field | (1<<next), cur - 1, next) % 1000000000;
    }
    int pre = num - 1;
    if(pre>=0){
        dp[field][cur][num] += dfs(field | (1<<pre), cur - 1, pre) % 1000000000;
    }

    return dp[field][cur][num];
}
int main(){
    cin>>n;
    long long int res = 0;
    memset(dp,-1,sizeof(dp));
    for(int i=1; i<=9; i++){
        res  += dfs(0|(1<<i),n-1,i) % 1000000000;
        // cout<<dfs(0 | (1<<i),n-1,i)<<"\n";
    }
    cout<<res % 1000000000;
}