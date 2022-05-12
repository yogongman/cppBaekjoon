#include<iostream>
#include<cstring>
using namespace std;
long long int arr[101][101];  // idx, n 순서
long long int n;
long long int dp(int idx, int x){
    // cout<<idx<<" "<<x<<"\n";
    if(idx == n-1){
        // cout<<idx<<" () "<<x<<"\n";
        arr[idx][x] = 1;
        return 1;
    }
    if(arr[idx][x] != -1) return arr[idx][x];
    int pre = x-1;
    int next = x+1;
    
    long long int res = 0;
    if(pre>=0) res += dp(idx+1, pre)%1000000000;
    if(next<=9) res += dp(idx+1, next)%1000000000;

    arr[idx][x] = res%1000000000;
    return res;
}
int main(){
    cin>>n;
    memset(arr,-1,sizeof(arr));
    for(int i=1; i<=9; i++){
        dp(0,i);
    }

    long long int res = 0;
    for(int i=1; i<=9; i++){
        res += arr[0][i];
    }
    cout<<res%1000000000;

    return 0;
}