// 벡터로 구현
#include<iostream>
#include<vector>
using namespace std;
vector<int>net[101];
int num;
int check[101]={0,};
int answer = 0;
void dfs(int n){
    if(check[n]) return;
    answer++;
    cout<<n;
    check[n] = 1;
    for(int i=0; i<net[n].size(); i++){
        int y = net[n][i];
        dfs(y);
    }
    
}
int main(){
    cin>>num;
    int input_num,a,b;
    cin>>input_num;
    for(int i=0; i<input_num; i++){
        cin>>a>>b;
        net[a].push_back(b);
        net[b].push_back(a);
    }
    dfs(1);
    cout<<answer-1;

}

// ========리스트로 구현========
// int check[101]={0,};
// int net[101][101]={0,};
// int answer = 0;
// int num;
// void dfs(int n){
//     answer++;
//     check[n]=1;
//     for(int i=1; i<=num; i++){
//         if(net[n][i]&&!check[i]) dfs(i);
//     }
// }
// int main(){
//     int cnt,a,b; 
//     cin>>num;
//     cin>>cnt;
//     for(int i=0; i<cnt; i++){
//         cin>>a>>b;
//         net[a][b] = net[b][a] = 1;
//     }
//     dfs(1);
//     cout<<answer-1;
// }