#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
int cnt[1001];
int cost[1001];
int dp[1001];
queue<int> q;
int t,n,m,w;

int main(){
    cin>>t;

    for(int i=0; i<t; i++){
        vector<int> uv[1001];
        vector<int> tmp[1001];
        memset(cnt,0,sizeof(cnt));
        memset(dp,0,sizeof(dp));
        memset(cost,0,sizeof(cost));
// 변수 초기화

        cin>>n>>m;
        for(int j=1; j<=n; j++){ //cost 입력
            cin>>cost[j];
        }

        for(int j=1; j<=m; j++){
            int x,y;
            cin>>x>>y;
            uv[x].push_back(y);
            tmp[y].push_back(x);
            cnt[y]++;
        } // 간선 정보 입력

        cin>>w;

        for(int j=1; j<=n; j++){
            if(cnt[j] == 0){
                dp[j] = cost[j];
                q.push(j);
            }
        }

        for(int j=1; j<=n; j++){
            int x = q.front(); q.pop();
            // cout<<x<<" ";
            for(auto a: tmp[x]){
                dp[x] = max(dp[x], dp[a] + cost[x]);
            }
            for(auto a: uv[x]){
                if(--cnt[a] == 0){
                    q.push(a);
                }
            }
        }

        // cout<<"\n";
        // for(int j=1; j<=n; j++){
        //     cout<<dp[j]<<" ";
        // }

        cout<<dp[w]<<"\n";
    }

    return 0;
}