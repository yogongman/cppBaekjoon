#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>x;
    int a,b;
    int c,d;
    cin>>c;
    for(int i=0; i<c; i++){
    cin>>a>>b;
    d = a;
        for(int j=1; j<b; j++){
            d = (d%10)*a;
        }
        if(d%10 != 0){
            x.push(d%10);
        }
        else{
            x.push(10);
        }
    }
    for(int i=0; i<c; i++){
        cout<<x.front()<<endl;
        x.pop();
     }


     // 문제확인 잘 하자 ,,,,
     return 0;
}