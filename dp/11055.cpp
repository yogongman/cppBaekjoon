#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001];
int dp[1001];
int res[1001];

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i<=n; i++){
        int mx = 0;
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                if(mx < dp[j]){
                    mx = dp[j];
                }
            }
        }
        dp[i] = arr[i] + mx;
    }

    // for(int i=0; i<=n; i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<"\n";

    for(int i=0; i<=n; i++){
        ans = max(ans, dp[i]);
    }
    cout<<ans;
}