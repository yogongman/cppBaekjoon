#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>a;
    int n=4;
    string tmp;
    cin>>tmp;
    for(auto i: tmp){
        a.push_back(i-'0');
    }
    for(auto i: a){
        cout<<i<<" ";
    }
}