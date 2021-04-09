#include<iostream>
using namespace std;
int arr[1001];
int dp[1001];
int mx=0;
int main(){
    int n,tmp;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>tmp;
        arr[i] = tmp;
    }
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        int mx = 0;
        for(int j=1; j<i; j++){
            if(arr[j]<arr[i]){
                if(mx<dp[j]){
                    mx = dp[j];
                }
            }
        }
    
    }
    cout<<mx;

}