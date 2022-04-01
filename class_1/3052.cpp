#include<iostream>
using namespace std;
int main(){
    int mod[42] = {0,};
    int tmp,res=0;
    for(int i=0; i<10; i++){
        cin>>tmp;
        mod[tmp%42]++;
    }
    for(int i=0; i<42; i++){
        if(mod[i]!=0) res++; 
    }
    cout<<res;
    return 0;
}