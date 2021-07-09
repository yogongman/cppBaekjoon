#include<bits/stdc++.h>
using namespace std;
char mat[2200][2200];
void rec(int x, int y, int size){
    if(size/3 == 1){
        mat[x+1][y+1] = ' ';
        return;
    }
    for(int i=0; i<size/3; i++){
        for(int j=0; j<size/3; j++){
            mat[x+size/3+i][y+size/3+j] = ' ';
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == 1 && j == 1) continue;
            rec(x+(size/3)*i,y+(size/3)*j,size/3);
        }
    }
}
int main(){
    int n;
    cin>>n;
    memset(mat,'*',sizeof(mat));
    rec(0,0,n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[j][i];
        }
        cout<<"\n";
    }


}