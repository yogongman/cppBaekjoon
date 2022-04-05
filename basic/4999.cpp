#include<iostream>
#include<string>
using namespace std;
int main(){
    string j;
    string d;
    cin>>j>>d;
    if(j.size()>=d.size()) cout<<"go";
    else cout<<"no";
    return 0;
}