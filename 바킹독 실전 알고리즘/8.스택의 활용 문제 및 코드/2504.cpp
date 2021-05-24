#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inp;
    bool isValid = true;
    stack<char> a;
    cin>>inp;
    int tmp=1;
    int answer = 0;
    for(int i=0; i<inp.length(); i++){
        if(inp[i]=='('){
            a.push(inp[i]);
            tmp*=2;
        }
        else if(inp[i]=='['){
            a.push(inp[i]);
            tmp*=3;
        }
        else if(inp[i]==')'){
            if(a.empty()||a.top()!='('){
                isValid = false;
                break;
            }
            else{
                if(inp[i-1] == '(') answer+=tmp;
                a.pop();
                tmp/=2;
            }
        }
        else if(inp[i]==']'){
            if(a.empty()||a.top()!='['){
                isValid = false;
                break;
            }
            else{ 
                if(inp[i-1] == '[') answer+=tmp;
                a.pop();
                tmp/=3;
            }
        }
        
    }
    if(!isValid || !a.empty()){
        cout<<'0';
    }
    else cout<<answer;

}