#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n;
int cost[502];
int table[502];
long long int dp[501];
queue<int> q;
vector<int> uv[501];
vector<int> temp[501];

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>cost[i];

        while(1){
            int tmp;
            cin>>tmp;
            if(tmp == -1) break;
            
            uv[tmp].push_back(i);
            temp[i].push_back(tmp);
            table[i] ++;
        }
    }
    for(int i=1; i<=n; i++){
        if(table[i] == 0){
            q.push(i);
            dp[i] = cost[i];
        }
    }

    for(int i=1; i<=n; i++){
        int cur = q.front(); q.pop();
        // cout<<cur<<" ";
        
        for(auto a: temp[cur]){
            dp[cur] = max(dp[cur], dp[a] + cost[cur]);
        }
        for(auto a: uv[cur]){
            if(--table[a] == 0){
                q.push(a);
            }
        }
    }
    
    // cout<<"\n";
    for(int i=1; i<=n; i++){
        cout<<dp[i]<<"\n";
    }

}