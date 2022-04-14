#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,res = 0;
    bool b = false;
    bool a = false;
    cin>>n>>m;
    int x = 1001,y = 1001;
    int tmp,tmp1;
    for(int i=0; i<m; i++){
        cin>>tmp>>tmp1;
        x = min(tmp,x);
        y = min(tmp1,y);
    }   
    if(x<y*6) b = true; // 6개 패키지 가격이 낱개 6개 가격보다 쌀 경우 b = true;
    if(x<y*(n%6)) a = true; // 패키지 가격이 mod6 개 가격보다 쌀 경우 a = true;

    if(n/6 == 0){
        if(a){ // 패키지 가격이 낱개 개별 가격보다 쌀 경우
            res+=x;
        }
        else{
            res+=n*y;
        }
    }
    else{
        // 6개 묶음 가격 비교
        if(b){ // 패키지 가격이 낱개 6개보다 쌀 경우
            res += (n/6)*x;
        }
        else{
            res += (n/6)*y*6;
        }

        // 6으로 나눈 나머지(낱개 가격 비교)
        if(a){ //패키지 가격이 나머지 낱개 가격보다 쌀 경우
            res += x;
        }
        else{
            res += y*(n%6);
        }
    }
    cout<<res;
    return 0;    
}