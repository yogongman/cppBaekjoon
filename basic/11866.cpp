#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>a,temp,res;
    int n,m;
    cin >> n>> m;
    for(int i=1; i<=n; i++){
        a.push(i);
    }
    while(a.size()!=0){
        for(int i=0; i<m-1; i++){
            temp.push(a.front());
            a.pop();
            a.push(temp.front());
            temp.pop();
        }
        res.push(a.front());
        a.pop();
    }
    cout<<"<";
    for(int i=0; i<n-1; i++){
        cout<<res.front()<<","<<" ";
        res.pop();
    }
    cout<<res.front()<<">";
    return 0;
}