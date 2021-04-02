#include<iostream>
using namespace std;
int main(){
    int m,n;
    int lo[1001][1001];
    cin>>m>>n;                  
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>lo[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<lo[i][j];
        }
        cout<<endl;
    }
    return 0;
}