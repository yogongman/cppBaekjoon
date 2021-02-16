#include<iostream>
#include<stack>
#include<queue>
#include<deque>
#include<string>
using namespace std;
int main(){
    int n,tmp; 
    cin>>n;
    deque<int> a;
    queue<int> b;
    string temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp=="push_front"){
            cin>>tmp;
            a.push_front(tmp);
        }
        if(temp=="push_back"){
            cin>>tmp;
            a.push_back(tmp);
        }
        if(temp=="pop_front"){
            if(a.empty()){
                b.push(-1);
            }
            else{
                b.push(a.front());
                a.pop_front();
            }
        }
        if(temp=="pop_back"){
            if(a.empty()){
                b.push(-1);
            }
            else{
                b.push(a.back());
                a.pop_back();
            }
        }
        if(temp == "size"){
            b.push(a.size());
        }
        if(temp == "empty"){
            if(a.empty()) b.push(1);
            else{
                b.push(0);
            }
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