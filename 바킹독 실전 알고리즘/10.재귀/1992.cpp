#include<bits/stdc++.h>
using namespace std;
string ip[64];
void quad(int x, int y, int size){
    bool isn = false;
    // cout<<x<<" "<<y<<" "<<size<<"\n";
    for(int i=y; i<y+size; i++){
        for(int j=x; j<x+size; j++){
            if(ip[y][x] != ip[i][j]){
                // cout<<j<<" "<<i<<"&\n";
                isn = true;
                break;
            }
        }
        if(isn) break;
    }
    if(!isn){
        std::cout<<ip[y][x];
        return;
    }
    std::cout<<"(";
    quad(x,y,size/2); //1
    quad(x+size/2,y,size/2); //2
    quad(x,y+size/2,size/2); //3
    quad(x+size/2,y+size/2,size/2); //4
    std::cout<<")";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ip[i]; //y가 첫 인덱스, x는 그 다음 인덱스
    }
    quad(0,0,n);

}