#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,tmp; 
    cin>>n;
    queue<int> a;
    queue<int> b;
    string temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp == "push"){
            cin>>tmp;
            a.push(tmp);
        }
        if(temp == "pop"){
            if(a.empty()){
                b.push(-1);
                continue;
            }
            b.push(a.front());
            a.pop();
        }
        if(temp == "size"){
            b.push(a.size());
        }
        if(temp == "empty"){
            if(a.empty()) b.push(1);
            else b.push(0);
        }
        if(temp == "front"){
            if(a.empty()){b.push(-1);
            }
            else(b.push(a.front()));
        }
        if(temp == "back"){
            if(a.empty()){
                b.push(-1);
            }
            else{
                b.push(a.back());
            }
        }
    }
    while(!b.empty()){
        cout<<b.front()<<"\n";
        b.pop();
    }
    return 0;
}
// 기존 큐 문제에서 버퍼 관련 시간문제 생기는 것을 해결할 코드의 유무 차이밖에 없음