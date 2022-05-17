#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,k;
long long int w[101];
long long int v[101];
vector<vector<long long int>> dp(101,vector<long long int>(100001));
int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>w[i]>>v[i];
    }    

    for(int i=1; i<=n; i++){
        for(int j=1; j<w[i]; j++){
            dp[i][j] = dp[i-1][j];
        }
        for(int j=w[i]; j<=k; j++){
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            
        }
        // for(int o=0; o<=k; o++){
        //     cout<<dp[i][o]<<" ";
        // }
        // cout<<"\n";
    }
    cout<<dp[n][k];

    return 0;
}