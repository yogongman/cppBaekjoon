#include<iostream>
using namespace std;
int n;
int arr[18][18];
int dp[18][18];
int res;
void dfs(int x, int y, int dir){
    if(x == n-1 && y == n-1) res++;
    if(x+1<n && dir != 1 && arr[x+1][y] == 0){
        // cout<<x<<" "<<y<<" "<<dir<<" "<<"0"<<" "<<"\n";
        dp[x+1][y] = dp[x][y]+1;
        dfs(x+1,y,0);
    } // x+1(오른쪽 1칸 이동, 가로)

    if(y+1<n && dir != 0 && arr[x][y+1] == 0){
        // cout<<x<<" "<<y<<" "<<dir<<" "<<"1"<<" "<<"\n";
        dp[x][y+1] = dp[x][y]+1;
        dfs(x,y+1,1);

    } // y+1(밑으로 1칸 이동, 세로);
    if(x+1<n && y+1<n && arr[x+1][y+1] == 0 && arr[x+1][y] == 0 && arr[x][y+1] == 0){
        // cout<<x<<" "<<y<<" "<<dir<<" "<<"2"<<" "<<"\n";
        dp[x+1][y+1] = dp[x][y]+1;
        dfs(x+1,y+1,2);
    } // x+1, y+1(오른쪽 밑 대각으로 이동, 대각선);
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }

    dfs(1,0,0);
    // cout<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<res;

}