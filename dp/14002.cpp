#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int arr[1001];
int dp[1001];
int n;
stack<int> s;
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int last = 0;
    int last_n = 1001;
    for(int i=1; i<=n; i++){
        int mx = 0;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i] && mx < dp[j]){
                mx = dp[j];
            }
        }
        dp[i] = mx + 1;
        last = max(last,dp[i]);
    }
    cout<<last<<"\n";
    last ++;

    for(int i=n; i>0; i--){
        if(last == 1) break;
        if(dp[i] == last-1 && last_n > arr[i]){
            last_n = arr[i];
            last = dp[i];
            s.push(last_n);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" "; s.pop();
    }
}