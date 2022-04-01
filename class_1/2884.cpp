#include<iostream>
using namespace std;
int main(){
    int h, m;
    cin>>h>>m;
    
    if(m>=45){
        m = m-45;
    }
    else{
        if(h == 0){
            m = 15+m;
            h = 23;
        }
        else{
            h--;
            m = 15+m;
        }
    }
    cout<<h<<" "<<m;
    return 0;
}