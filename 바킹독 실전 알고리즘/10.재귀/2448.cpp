#include<bits/stdc++.h>
using namespace std;

char arr[6143][3072];
void draw(int x, int y){
    //삼각형 그리기
    arr[x][y] = '*';
    arr[x-1][y+1] = '*';
    arr[x+1][y+1] = '*';
    for(int i=0; i<5; i++){
        arr[x-2+i][y+2] = '*'; 
    }
}
void tri(int x, int y, int size){
    if(size == 3){ //basecondition
        draw(x,y);
        return;
    }
    tri(x,y,size/2);
    tri(x-size/2,y+size/2,size/2);
    tri(x+size/2,y+size/2,size/2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            arr[j][i] = ' ';
        }
    }
    tri(n-1,0,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            cout<<arr[j][i];
        }
        cout<<'\n';
    }
    return 0;
}
