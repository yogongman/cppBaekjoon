#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[1001];
int up[1001];
int down[1002];
int res[1002];
void asce(){
    for(int i=1; i<=n; i++){
        int mx = 0;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i] && mx < up[j]){
                mx = up[j];
            }
        }
        up[i] = mx + 1;
    }
}
void rev_asce(){

    for(int i=n; i>=1; i--){
        int mx = 0;
        for(int j = n+1; j>i; j--){
            if(arr[j]<arr[i] && mx < down[j]){
                mx = down[j];
            }
        }
        down[i] = mx + 1;
    }
}
int main(){
    cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    asce();
    rev_asce();
    // for(int i=1; i<=n; i++){
    //     cout<<up[i]<<" ";
    // }
    // cout<<"\n";
    // for(int i=1; i<=n; i++){
    //     cout<<down[i]<<" ";
    // }
    for(int i=1; i<=n; i++){
        res[i] = up[i] + down[i];
        ans = max(ans, res[i]);
    }
    cout<<ans-1;
    return 0;
}