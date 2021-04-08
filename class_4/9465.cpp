#include<iostream>
#include<algorithm>
using namespace std;
int inp[2][100001]={0};
int memo[2][100001]={0};
int main(){
    int n;
    int m;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>inp[0][j];
        }
        for(int j=0; j<m; j++){
            cin>>inp[1][j];
        }
        memo[0][0] = inp[0][0];
        memo[1][0] = inp[1][0];
        memo[0][1] = inp[0][1]+memo[1][0];
        memo[1][1] = inp[1][1]+memo[0][0];
        for(int k=2; k<m; k++){
            memo[0][k] = inp[0][k] + std::max(memo[1][k-1],memo[1][k-2]);
            memo[1][k] = inp[1][k] + std::max(memo[0][k-1],memo[0][k-2]);
        }
        cout<<std::max(memo[0][m-1],memo[1][m-1])<<"\n";
    }
    

}