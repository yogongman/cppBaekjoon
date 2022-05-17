#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[10001];
int coin[22];
int n,m;
void dp(){
    arr[0] = 1;
    
    for(int i=1; i<=n; i++){
        for(int j=coin[i]; j<=m; j++){
            arr[j] = arr[j] + arr[j-coin[i]];
        }
    }

    cout<<arr[m]<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        memset(arr,0,sizeof(arr));
        memset(coin,0,sizeof(coin));

        cin>>n;

        for(int j=1; j<=n; j++){
            cin>>coin[j];
        }

        cin>>m;
        dp();
    }
    return 0;
}