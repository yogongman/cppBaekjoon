#include<iostream>
#include<cstring>
using namespace std;
int n;
long long int arr[1001][10];
long long int dp(int idx, int x){
    // cout<<idx<<" "<<x<<"\n";
    if(arr[idx][x] != -1) return arr[idx][x];
    if(idx == n - 1){
        arr[idx][x] = 1;
        return 1;
    }


    long long int res = 0;
    for(int i=x; i<=9; i++){
        res += dp(idx+1, i) % 10007; 
    }
    arr[idx][x] = res % 10007;
    return res;
}
int main(){
    cin>>n;
    
    memset(arr,-1,sizeof(arr));
    int res = 0;
    for(int i=0; i<=9; i++){
        dp(0,i);
        res += arr[0][i];
        // cout<<arr[0][i]<<" ";
    }

    cout<<res % 10007;
    return 0;
}