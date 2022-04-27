#include<iostream>
using namespace std;
int main(){
    int n=5;
    int t = 0;
    int tmp;
    while(n--){
        cin>>tmp;
        if(tmp <40){
            t+=40;
        }
        else
            t += tmp;
    }
    cout<<t/5;
}