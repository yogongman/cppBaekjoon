#include<bits/stdc++.h>
using namespace std;
int cnt[3]; // [0] = -1, [1] = 0, [2] = 1
int board[2188][2188];
void quad(int x, int y, int size){
    if(size == 1){
        cnt[board[x][y]+1] ++;
        // cout<<x<<" "<<y<<" "<<size<<" "<<board[x][y]<<"\n";

        return;
    }
    bool isn = false;
    for(int i=y; i<size+y; i++){
        for(int j=x; j<size+x; j++){
            if(board[x][y] != board[j][i]){
                isn = true;
                break;
            }
        }
        if(isn) break;
    }
    if(!isn){
        cnt[board[x][y]+1] += 1;
        // cout<<x<<" "<<y<<" "<<size<<" "<<board[x][y]<<"*\n";
        return;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            quad(x+j*(size/3),y+i*(size/3),size/3);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; 
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>board[j][i];
        }
    }
    quad(0,0,N);
    for(auto i: cnt){
        cout<<i<<"\n";
    }
    
}