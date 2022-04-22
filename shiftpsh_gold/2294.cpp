#include<iostream>
#include<algorithm>
using namespace std;
int arr[101];
int cost[10001];
int main(){
    int n,k;
    cin>>n>>k;
    fill(cost,cost+k+1, 10001);
    cost[0] = 0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        for(int j=arr[i]; j<=k; j++){
            // cout<<cost[j]<<" ";
            cost[j] = min(cost[j], cost[j-arr[i]]+1);
            // cout<<cost[j]<<" ";
        }
        // cout<<"\n";
    }

    if(cost[k] == 10001) cout<<"-1";
    else cout<<cost[k];
    return 0;
}