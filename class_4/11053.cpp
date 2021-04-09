#include<iostream>
using namespace std;
int arr[1001];
int dp[1001];
int mx=0;
int ans;
int main(){
    ios::sync_with_stdio(1);
	cin.tie(0);
    int n,tmp;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>tmp;
        arr[i] = tmp;
        dp[i] = 1;
    }
    for(int i=1; i<=n; i++){
        int mx = 0;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]&&mx<dp[j]){
                mx = dp[j];
            }
        }
        dp[i] = mx + 1;
        ans = max(dp[i],ans);
    }
    cout<<ans<<" ";

}

// 이번 문제에서 나왔던 실수: 답으로 나와야 할 최대 길이는 배열 dp의 마지막에 있지만은 않다 = 전체에서 최대 길이를 출력해야함