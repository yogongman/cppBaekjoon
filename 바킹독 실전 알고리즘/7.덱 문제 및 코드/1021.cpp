#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    int ans=0;
    deque<int> que;
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        que.push_back(i);
    }
    for(int i=0; i<M; i++){
        int n,idx;
        cin>>n;
        for(int i=0; i<que.size(); i++){
            if(n==que[i]){
                idx = i;
                break;
            }
        }
        if(idx < que.size() - idx){
           while(1){
               if(que.front()==n){
                   que.pop_front();
                   break;
               }
               que.push_back(que.front());
               que.pop_front();
               ans++;
           } 
        }
        else{
            while(1){
                if(que.front()==n){
                    que.pop_front();
                    break;
                }
                que.push_front(que.back());
                que.pop_back();
                ans++;
            }
        }
    }
    
    cout<<ans<<"\n";


}