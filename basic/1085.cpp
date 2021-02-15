#include <iostream>
using namespace std;
int main(){
    double x,y,w,h,a,b;
    cin>>x>>y>>w>>h;
    if(x>w/2){
        a = w-x;
    }
    else a = x;
    if(y>h/2){
        b=h-y;
    }
    else b = y;
    if(a>b){
        cout<<(int)b;
    }
    else{
        cout<<int(a);
    }
    return 0;
}