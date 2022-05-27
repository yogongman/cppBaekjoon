#include<iostream>
#include<cstring>
using namespace std;
int n;
int arr[33][33];
long long int dp[33][33][3];
long long int res;
// long long int dfs(int x, int y, int dir){
//     if(x < 0 || y < 0 || arr[x][y] == 1) return 0;
//     // cout<<x<<" "<<y<<" "<<dir<<"\n";
//     if(dp[x][y][dir] != 0) return dp[x][y][dir];
    
//     if(dir == 0){
//         dp[x][y][dir] = dfs(x-1,y,0) + dfs(x-1, y, 2);
//     }
//     else if(dir == 1){
//         dp[x][y][dir] = dfs(x,y-1,1) + dfs(x,y-1,2);
//     }
//     else if(dir == 2){
//         if(arr[x-1][y] || arr[x-1][y-1] || arr[x][y-1]){
//             dp[x][y][dir] = 0;
//             return 0;
//         }
//         dp[x][y][dir] = dfs(x-1,y-1,0) + dfs(x-1,y-1,1) + dfs(x-1,y-1,2);
//     }

//     return dp[x][y][dir];
// }
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }

    if(arr[n-1][n-1] == 1){
        cout<<"0";
        return 0;
    }
    // memset(dp,-1,sizeof(dp));

    
    dp[1][0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=2; j<n; j++){
            if(arr[j][i] == 1) continue;
            dp[j][i][0] = dp[j-1][i][0] + dp[j-1][i][2];

            if(i == 0) continue;
            dp[j][i][1] = dp[j][i-1][1] + dp[j][i-1][2];
            
            if(arr[j-1][i] != 1 && arr[j][i-1] != 1){
                dp[j][i][2] = dp[j-1][i-1][0] + dp[j-1][i-1][1] + dp[j-1][i-1][2]; 
            }
           
        }
    }

    
    // cout<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         int tmp = 0;
    //         tmp += dp[j][i][0] + dp[j][i][1] + dp[j][i][2];
    //         cout<<tmp<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[j][i][0];
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[j][i][1];
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[j][i][2];
    //     }
    //     cout<<"\n";
    // }
    for(int i=0; i<3; i++){
        res += dp[n-1][n-1][i];
    }
    cout<<res;
}