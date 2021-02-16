#include<iostream>
#include<string>
using namespace std;
string black[8]={
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"}
};
string white[8]={
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"}
};
string chess[50];
int com_b(int x,int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(black[i][j]!=chess[x+i][y+j])  cnt++;
        }
    }
    return cnt;
}

int com_w(int x, int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(white[i][j]!=chess[x+i][y+j]) cnt++;
        }
    }
    return cnt;
}
int main(){
    int n,m;
    cin >> n >> m;
    int min = 2550;
    for(int i=0; i<n; i++){
        cin >> chess[i];
    }
    for(int i=0; i+8<=n; i++){
        for(int j=0; j+8<=m; j++){
            int temp;
            temp = (com_b(i,j) < com_w(i,j)) ? com_b(i,j):com_w(i,j);
            if(temp<min){
                min = temp;
            }
        }
    }
    cout<<min;
    return 0;
}