#include<iostream>
using namespace std;
int n;
int arr[102];
long long int dp[21][102];
long long int func(int p, int res){
    if(res < 0 || res > 20) return 0;
    if(p == 1) return 1;
    if(dp[p][res] != 0) return dp[p][res];
    dp[p][res] = func(p+1, res + arr[p]) + func(p+1, res - arr[p]);
}
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    dp[arr[1]][1] = 1;
    for(int i=2; i<=n-1; i++){
        for(int j=0; j<=20; j++){
            if(dp[j][i-1] != 0){
                if(j+arr[i] >= 0 && j+arr[i] <= 20){
                    dp[j+arr[i]][i] += dp[j][i-1];
                }
                if(j-arr[i] >= 0 && j-arr[i] <= 20){
                    dp[j-arr[i]][i] += dp[j][i-1];
                }
            }
        }
    }
    // for(int i=1; i<=n-1; i++){
    //     for(int j=0; j<=20; j++){
    //         cout<<dp[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }

    cout<<dp[arr[n]][n-1];
    

}