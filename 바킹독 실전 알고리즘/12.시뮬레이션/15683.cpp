// 실수 : 카메라가 주어지지 않을 때 void의 개수를 잘못셈;..

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> board(10,vector<int>(10));
vector<vector<int>> boardtmp(10,vector<int>(10));
vector<pair<pair<int, int>,int>> cam; //x,y,cam number
int arr[9];
int mn = 2000;
int n,m;
int countvoid(){
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[j][i] == 0){
                cnt++;
            }
        }
    }
    return cnt;
}
void one(int x, int y, int k){
    //k=1 우측, k=2 하단, k=3 좌측, k=4 상단
    if(k==1){
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k==2){
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
    }
    else if(k==3){
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k==4){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
    }
}
void two(int x, int y, int k){
    //k = 1 상하, k = 2 좌우
    if(k == 1 || k == 3){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
    }
    if(k == 2 || k == 4){
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
}
void three(int x, int y, int k){
    //k = 1 상우, k = 2 우하, k = 3 하좌, k = 4 좌상
    if(k == 1){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k == 2){
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k == 3){
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else{
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
}
void four(int x, int y, int k){
    //k = 1 하 제외, k = 2 좌 제외, k = 3 상 제외, k = 4 우 제외
    if(k == 1){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k == 2){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else if(k == 3){
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
    else{
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
    }
}
void five(int x, int y, int k){
        for(int i=y-1; i>=0; i--){ //상
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=y+1; i<n; i++){ //하
            if(board[x][i] == 6) break;
            board[x][i] = 7;
        }
        for(int i=x-1; i>=0; i--){ //좌
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
        for(int i=x+1; i<m; i++){ //우
            if(board[i][y] == 6) break;
            board[i][y] = 7;
        }
}
void brute(int k){
    if(k == cam.size()){
        board = boardtmp;
        for(int i=0; i<k; i++){

            if(cam[i].second == 1){
                one(cam[i].first.first,cam[i].first.second,arr[i]);
            }
            else if(cam[i].second == 2){
                two(cam[i].first.first,cam[i].first.second,arr[i]);
            }
            else if(cam[i].second == 3){
                three(cam[i].first.first,cam[i].first.second,arr[i]);
            }
            else if(cam[i].second == 4){
                four(cam[i].first.first,cam[i].first.second,arr[i]);
            }
            else if(cam[i].second == 5){
                five(cam[i].first.first,cam[i].first.second,arr[i]);
            }
            mn = min(mn,countvoid());
        }
        return;
    }
    for(int i=1; i<=4; i++){
        arr[k] = i;
        brute(k+1);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m; //n = y, m = x
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>board[j][i];
            if(board[j][i] != 0 && board[j][i] != 6){
                cam.push_back({{j,i},board[j][i]});
            }
        } 
    }
    boardtmp = board;
    if(cam.empty()){
        cout<<countvoid();
        return 0;
    }
    brute(0);
    cout<<mn;
}