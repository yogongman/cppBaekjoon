#include<iostream>
using namespace std;
int main(){
    int n,r,c;
    cin>>n>>r>>c;
    if((r+c)%2 == 1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if((i+j) % 2 == 1){
                    cout<<"v";
                }
                else cout<<".";
            }
            cout<<"\n";
        }
    }
    else{
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if((i+j)%2 == 0){
                    cout<<"v";
                }
                else cout<<".";
            }
            cout<<"\n";
        }

    }
    return 0;
}