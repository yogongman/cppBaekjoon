#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    priority_queue<int> mh;
    int num,tmp;   
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>tmp;
        if(!tmp){
            if(mh.empty()){
                cout<<0<<"\n";
            }
            else{
                cout<<mh.top()<<"\n";
                mh.pop();
            }
        }
        else{
            mh.push(tmp);
        }
    }
    return 0;

}