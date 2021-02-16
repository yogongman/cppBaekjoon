#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;
int main(){
    int n,tmp; 
    cin>>n;
    stack<int> a;
    queue<int> b;
    string temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp == "push"){
            cin>>tmp;
            a.push(tmp);
        }
        if(temp == "top"){
            if(a.empty()){
                b.push(-1);
                continue;
            }
            b.push(a.top());
        }
        if(temp == "size"){
            b.push(a.size());
        }
        if(temp == "empty"){
            if(a.empty()){
                b.push(1);
            }
            else{
                b.push(0);
            }
        }
        if(temp == "pop"){
            if(a.empty()){
                b.push(-1);
                continue;
            }
            b.push(a.top());
            a.pop();
        }
    }
    while(!b.empty()){
        cout<<b.front()<<"\n";
        b.pop();
    }
    return 0;
}