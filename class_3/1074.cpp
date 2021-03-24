#include<iostream>
using namespace std;
int n,r,c,ans;
void quot(int x, int y, int size){
    if(x==c && y==r){
        cout<<ans;
        return;
    }
    if(c<x+size && r<y+size && x<=c && y<=r){
        quot(x,y,size/2);
        quot(x+size/2,y,size/2);
        quot(x,y+size/2,size/2);
        quot(x+size/2,y+size/2,size/2);
    }
    else{
        ans+=size*size;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> r >> c;
    quot(0,0,(1<<n));
    return 0;
}
