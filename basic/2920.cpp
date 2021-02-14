#include<iostream>
using namespace std;
int main(){
    int a[8];
    int temp = 0;
    for(int i=0; i<8; i++){
        cin>>a[i];
    }
    temp = a[0] - a[1];
    for(int i=1; i<7; i++){
        if(temp != (a[i] - a[i+1])){
            cout<<"mixed";
            return 0;
        } 
    }
    if(temp==-1) cout<<"ascending";
    else cout<<"descending";
    return 0;
}