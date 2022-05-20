#include<iostream>
#include<algorithm>
using namespace std;
int n;
int A[501];
int arr[501];
int dp[501];
int main(){
    int x,y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        A[x] = y;
    }
    int idx = 1;
    for(int i=1; i<=500; i++){
        if(A[i] != 0){
            arr[idx] = A[i];
            idx ++;

        }
    }
    // for(int i=1; i<=n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    int res = 0;
    for(int i=1; i<=n; i++){
        int mx = 0;
        for(int j = 0; j<i; j++){
            if(arr[j] < arr[i] && mx < dp[j]){
                mx = dp[j];
            }
        }
        dp[i] = mx + 1;
        res = max(dp[i],res);
    }
    cout<<n - res;

    return 0;
}