#include<bits/stdc++.h>
using namespace std;
int arr[52][52];
int a[14];
vector<pair<int,int>> chi;
vector<pair<int,int>> home;
int n,m;
bool isused[14];
int mn = 20000000;
int dist(int x1, int y1, int x2, int y2){
    int x,y;
    int ret = 0;
    x = x1-x2;
    if(x<0) x = x*-1;
    y = y1-y2;
    if(y<0) y = y*-1;
    ret = x + y;
    return ret;
}
void func(int chinum, int k){
    int tot = 0;
    if(k == chinum){
        for(auto i: home){
            int mn1 = 2000000;
            // cout<<"\n";
            for(int j=0; j<k; j++){
                // cout<<i.first<<" "<<i.second<<" "<<chi[a[j]].first<<" "<<chi[a[j]].second<<" "<<dist(i.first,i.second,chi[a[j]].first,chi[a[j]].second)<<"\n";
                mn1 = min(dist(i.first,i.second,chi[a[j]].first,chi[a[j]].second),mn1);
            }
            // cout<<mn1<<"()\n";
            tot += mn1;
        }
        // cout<<tot<<"\n\n";
        mn = min(mn, tot);
        // for(int i=0; i<k; i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<"\n";
        return;
    }
    for(int i=0; i<chi.size(); i++){
        if(!isused[i] && a[k-1]<=i){
            isused[i] = 1;
            a[k] = i;
            func(chinum,k+1);
            isused[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
            if(arr[j][i] ==  2){
                chi.push_back({j,i});
            }
            else if(arr[j][i] == 1){
                home.push_back({j,i});
            }
        }
    }
    for(int i=1; i<=m; i++){
        func(i,0);
    }
    cout<<mn;
}