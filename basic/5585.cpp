#include<iostream>
using namespace std;
int main(){
    int a,b;
    int cnt = 0;
    cin>>a;
    b = 1000-a;
    while(b>0){
        if(b-500>=0){
            b -= 500;
            cnt ++;
        }
        else if(b>=100){
            b-=100;
            cnt++;
        }   
        else if(b>=50){
            b-=50;
            cnt++;
        }
        else if(b>=10){
            b-=10;
            cnt++;
        }
        else if(b>=5){
            b-=5;
            cnt++;
        }
        else if(b>=1){
            b-=1;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}