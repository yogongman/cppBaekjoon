#include<iostream>
#include<algorithm>
#define M 17000001
using namespace std;
int n;
int w[16][16]; //[] to []
int dp[1<<16][16];
int tsp(int visit, int cur){ // dfs를 위한 for문은 비트 and연산으로 구현
    visit |= (1<<cur); // cur번쨰 bit on(cur번째 방문 표시)
    if(dp[visit][cur] > 0){
        return dp[visit][cur];
    }
    if(visit == (1<<n) - 1){
        if(w[cur][0] > 0){
            return w[cur][0];
        }
        return M;
    }

    int res = M;
    for(int i=0; i<n; i++){
        if(i != cur && (visit & (1<<i)) == 0 && w[cur][i] != 0){
            res = min(res, tsp(visit,i) + w[cur][i]);
        }
    }
    dp[visit][cur] = res;
    return res;
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>w[i][j];
        }
    }
    
    int res = tsp(0,0);
    cout<<res;
    return 0;
}