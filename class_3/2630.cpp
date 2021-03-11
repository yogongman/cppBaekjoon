#include<iostream>
#include<cstring>
using namespace std;
int a[129][129]={0,};
int zero = 0, one = 0;

void quot(int x,int y,int n){
    int cnt = 0;
    for(int i=x; i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(a[i][j]){
                cnt++;
            }
        }
    }
    if(!cnt){
        one++;
    }
    else if(cnt==n*n){
        zero++;
    }
    else{
        quot(x ,y, n/2);
        quot(x+n/2, y, n/2);
        quot(x,y+n/2,n/2);
        quot(x+n/2,y+n/2,n/2);
    }
    return;
}
int main(){
    int num;
    cin>>num;
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin>>a[i][j];
        }
    }

    quot(0,0,num);

    cout<<one<<"\n"<<zero;
    return 0;
}