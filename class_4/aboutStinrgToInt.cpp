#include<string>
#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    int tmp=0;
    tmp += a.back()-'0'; // 0 은 아스키코드로 48임. 이를 빼서 해당 숫자를 나오게함.
    cout<<tmp;
}