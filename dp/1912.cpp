#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int arr[100001];
    int dp[100001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    dp[0] = arr[0];
    for(int i=1; i<n; i++){
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        ans = max(dp[i], ans);
    }

    cout<<ans;
    return 0;
}