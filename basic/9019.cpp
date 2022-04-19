#include<iostream>
#include<queue>
#include<string>
using namespace std;
int a,b;
bool visited[10000];
void bfs(){
    queue<pair<string,int>> q;
    q.push(make_pair("",a));
    visited[a] = true;

    while(!q.empty()){
        int cur = q.front().second;
        string cur_s = q.front().first;
        q.pop();

        if(cur == b){
            cout<<cur_s<<"\n";
            return;
        }

        int d,s,l,r;

        d = (cur*2)%10000;
        s = cur-1 < 0 ? 9999 : cur - 1;
        l = (cur%1000)*10 + cur/1000;
        r = cur/10 + (cur%10)*1000;

        if(!visited[d]){
            visited[d] = true;
            q.push(make_pair(cur_s+"D", d)); 
        }

        if(!visited[s]){
            visited[s] = true;
            q.push(make_pair(cur_s+"S", s));
        }
        if(!visited[l]){
            visited[l] = true;
            q.push(make_pair(cur_s+"L", l));
        }
        if(!visited[r]){
            visited[r] = true;
            q.push(make_pair(cur_s+"R", r));
        }
    }



}

int main(){
    int p;
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>a>>b;
        fill(visited,visited+10000,false);
        bfs();
    }
    return 0;
}