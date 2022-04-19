#include<iostream>
#include<vector>
#include<queue>
using namespace std;
queue<int> q;
int main(){
    int k, v, e;
    int x,y;
    cin>>k;
    for(int i=0; i<k; i++){
        cin>>v>>e;
        vector<vector<int>> a(20001);
        int arr[20001];
        bool visited[20001];
        bool flag = false;

        for(int j=0; j<e; j++){
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        fill(arr,arr+20001,0);
        fill(visited,visited+20001,0);
        for(int j = 1; j<=v; j++){
            q.push(j);
            if(arr[j] == 0){
                arr[j] = 1;
            }

            visited[j] = true;
            while(!q.empty()){
                int tmp = q.front(); q.pop();
                for(int p : a[tmp]){
                    if(visited[p]){
                        if(arr[p] == arr[tmp]){
                            flag = true;
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    q.push(p);
                    visited[p] = true;
                    if(arr[p] == 0){
                        arr[p] = arr[tmp] * -1;
                    }
                    else if(arr[p] == arr[tmp]){
                        cout<<"\n"<<p<<" "<<tmp<<" "<<arr[p]<<" "<<arr[tmp]<<"\n";
                        flag = true;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(flag){
                    while(!q.empty()) q.pop();
                }
            }
            if(flag) break;
        }
        // cout<<"\n";
        // for(int j=1; j<=v; j++){
        //     cout<<j<<" "<<arr[j]<<"\n";
        // }
        if(flag) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}