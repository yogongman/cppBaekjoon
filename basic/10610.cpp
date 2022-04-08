#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    int tmp = 0;
    bool iszero = false;
    for(char i : a){
        tmp += i - '0';
        if(i == '0'){
            iszero = true;
        }
    }
    if(iszero && tmp%3 == 0){
        sort(a.begin(),a.end());
        reverse(a.begin(), a.end());
        cout<<a;
    }
    else cout<<-1;
    return 0;
}