#include<iostream>
#include<algorithm>
using namespace std;
int arr[501][501];
int mx[501][501];
int main(){
    int n;
    int tmp;
    int a,b,ans=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cin>>tmp;
            arr[i][j] = tmp;
        }
    }
    mx[1][0] = arr[1][0];
    for(int i=2; i<=n; i++){
        for(int j=0; j<i; j++){
            if(i==j+1){
                mx[i][j] = mx[i-1][j-1]+arr[i][j];
            }
            else if(!j){
                mx[i][j] =  mx[i-1][j]+arr[i][j];
            }
            else{
                mx[i][j] = max(mx[i-1][j-1],mx[i-1][j])+arr[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        ans = max(mx[n][i],ans);
    }
    cout<<ans;
}