#include<iostream>
#include<string>
using namespace std;
int main(){
    string ip;
    cin>>ip;
    for(int i=0; i<ip.size()/2; i++){
        if(ip[i] != ip[ip.size()-i-1]){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    return 0;
}