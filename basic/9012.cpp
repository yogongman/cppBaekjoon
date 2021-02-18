#include <iostream>
#include <vector>
#include<stack>
using namespace std;
int main(){
    int n;
    string temp;
    stack<char> s;
    cin>>n;
    vector<string>a;
    for(int i=0; i<n; i++){
        while(!s.empty()){
            s.pop();
        }
        cin>>temp;
        a.push_back(temp);
        for(int j=0; j<a[i].size(); j++){
            if(s.empty()){
                s.push(a[i][j]);
            }
            else if(s.top()=='(' && a[i][j] == ')'){
                s.pop();
            }
            else s.push(a[i][j]);
        }
        if(!s.empty()) cout<<"NO\n";
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}