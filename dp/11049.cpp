#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int n;
int MN[501][501];
int s[501];
vector<pair<int,int>> a(501);
int dp(int x, int y){
    // cout<<x<<" "<<y<<"\n";

    if(x == y) return 0;
    if(MN[x][y] != -1){
        // cout<<MN[x][y]<<"\n";
        return MN[x][y];
    }
    if(x+1 == y){
        MN[x][y] = a[x].first * a[y].first * a[y].second;
        // cout<<MN[x][y]<<"\n";
        return MN[x][y];
    }
    int mn = 2147483647;
    int tmp = 0;
    for(int i=x; i<y; i++){
        mn = min(mn,dp(x,i) + dp(i+1,y) + a[x].first * a[i].second * a[y].second);
    }
    MN[x][y] = mn;
    // cout<<MN[x][y]<<"\n";
    return mn;
}
int main(){
    cin>>n;
    memset(MN,-1,sizeof(MN));
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    
    dp(0,n-1);
    cout<<MN[0][n-1];
}