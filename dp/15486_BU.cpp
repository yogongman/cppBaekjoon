#include<iostream>
#include<algorithm>
using namespace std;
int t[1500001];
int p[1500001];
int dp[1500001];
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>t[i]>>p[i];
    }
    for(int i=1; i<=n; i++){
        dp[i] = max(dp[i], dp[i-1]);
        if(t[i]+i<=n+1){
            dp[t[i]+i] = max(dp[t[i]+i], dp[i] + p[i]);
            // cout<<"\n"<<dp[i]<<"\n";
        }
    }
    
    // for(int i=1; i<=n+1; i++){
    //     cout<<dp[i]<<" ";
    // }
    int mx = 0;
    for(int i=1; i<=n+1; i++){
        mx = max(dp[i],mx);
    }
    cout<<mx;
    return 0;
}