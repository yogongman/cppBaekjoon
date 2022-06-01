#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1e9;
using namespace std;
int n;
int w[21][21]; 
int dp[1<<21][21];
int tsp(int visit, int cur){ //cur = cur 번째 사람
    // cout<<visit<<" "<<cur<<"\n";
    if(visit == (1<<n) -1) return 0;
    if(dp[visit][cur] != -1) return dp[visit][cur];

    int res = M;
    for(int i=0; i<n; i++){
        if((visit & (1<<i)) == 0){ // 연산자 우선순위 주의!!!!!!!!!!!!!!
            res = min(res, tsp(visit | (1 << i), cur + 1) + w[cur][i]);
            // cout<<"%"<<i<<"\n";
        }
    }

    dp[visit][cur] = res;
    return dp[visit][cur];
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>w[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));

    cout<<tsp(0,0);
    return 0;
}