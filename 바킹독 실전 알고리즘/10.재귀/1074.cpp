#include<bits/stdc++.h>
using namespace std;
int N,r,c;
int ans;
void quot(int x, int y, int size){
    cout<<x<<" "<<y<<size<<" "<<"\n";
    if(x == c && y == r){
        cout<<ans;
        return;
    }
    if(c<x+size && r<y+size && x<=c && y<=r){ // size는 가로 세로 길이, 현재 좌표에서 문제에 주어진 좌표를 셀 적당한 사이즈가 되면 분할
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
    cin >> N >> r >> c;
    quot(0,0,(1<<N));
    return 0;

}