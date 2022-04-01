#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    int result;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    reverse(b.begin(),b.end());
    result = (stoi(a)>stoi(b)) ? stoi(a):stoi(b); 
    cout<<result;
    return 0;
}