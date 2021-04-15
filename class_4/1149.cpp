#include<iostream>
#include<algorithm>
using namespace std;
int cost[1001];
int arr[1001][3];
int ac[1001][3];
int main(){
    int n,tmp;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>tmp;
            arr[i][j] = tmp;
            if(i==0) ac[i][j] = tmp;
        }
    }
    for(int i=1; i<n; i++){
        ac[i][0] = min(ac[i-1][1],ac[i-1][2]) + arr[i][0];
        ac[i][1] = min(ac[i-1][0],ac[i-1][2]) + arr[i][1];
        ac[i][2] = min(ac[i-1][0],ac[i-1][1]) + arr[i][2];
    }
    cout<<min(ac[n-1][0],min(ac[n-1][1],ac[n-1][2]));
}