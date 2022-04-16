#include<iostream>
#include<string>
#include<stack>
using namespace std;
// 입력받은 수 앞자리가 무조건 커야함.
// 입력 예시 311 같은 수를 생각하지 않았고, 코드 수정(나중에 남은 k만큼 pop함)
stack<char> s;
stack<char> res;
int main(){
    int n,k;
    string a;
    cin>>n>>k>>a;    
    for(int i=0; i<n; i++){
        if(k==0){
            s.push(a[i]);
            continue;
        }
        if(s.empty() || s.top() >= a[i]){
            s.push(a[i]);
            continue;   

        }
        while(!s.empty() && k>0 && s.top()<a[i]){
            s.pop();
            k--;
        }
        s.push(a[i]);
    }
    if(k!=0){
        while(k>0){
            s.pop();
            k--;
        }
    }
    while(!s.empty()){
        res.push(s.top()); s.pop();
    }
    while(!res.empty()){
        cout<<res.top(); res.pop();
    }
    return 0;
}