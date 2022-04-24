#include<iostream>
#include<algorithm>
using namespace std;

int A[2001];
int B[2001];
int dp[2001][2001] = {0, };
int main(){
    int n,a,b;
    cin>>n;

    for(int i=n; i>0; i--) cin>>A[i];
    for(int i=n; i>0; i--) cin>>B[i];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]);
            if(A[i]>B[j]){
                dp[i][j] = max(dp[i][j], dp[i][j-1] + B[j]);
            }
            cout<<i<<" "<<j<<" "<<dp[i][j]<<"\n";
        }
    }
    cout<<dp[n][n];
    return 0;
}