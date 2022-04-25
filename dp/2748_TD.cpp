#include<iostream>
using namespace std;
long long int arr[101];
long long int dp(long long int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    if(arr[n] != -1){
        return arr[n];
    }
    arr[n] = dp(n-1) + dp(n-2);
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    arr[0] = 0;
    arr[1] = 1;
    fill(arr,arr+101,-1);
    cout<<dp(n);
    return 0;
}