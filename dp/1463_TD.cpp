#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr(1000001);
int dp(int n){
    if(n == 1) return 0;
    if(arr[n] > 0) return arr[n];
    arr[n] = dp(n-1) + 1;
    if(n%2 == 0) arr[n] = min(arr[n], dp(n/2) + 1);
    if(n%3 == 0) arr[n] = min(arr[n], dp(n/3) + 1);

    return arr[n];
}
int main(){
    int n;
    cin>>n;
    arr[1] = 0; 
    dp(n);

    cout<<arr[n];
    return 0;
}