#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    int tmp;
    while(1){
        vector<int>n;
        for(int i=0; i<3; i++){
            cin>>tmp;
            n.push_back(tmp);
        }
        sort(n.begin(),n.end());
        if(!n[0]&& !n[1] && !n[2]) break;
        else{
            if((n[0]*n[0] + n[1]*n[1]) == (n[2]*n[2])){
                cout<<"right"<<"\n";
            }
            else cout<<"wrong"<<"\n";
        }
    }
    return 0;
}