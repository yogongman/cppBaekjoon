#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    vector<int>a(1000001);
    int cnt=0;
    cin>>num;
    for(int i=2; i<=num; i++){
        a[i] = a[i-1]+1;
        if(i%2==0) a[i]=min(a[i],a[i/2]+1);
        if(i%3==0) a[i]=min(a[i],a[i/3]+1);
    }
    cout<<a[num];
}

// 내 생애 첫 dp활용 문제 나동빈님의 강의 참고함 출처 : https://www.youtube.com/watch?v=5Lu34WIx2Us&list=PLRx0vPvlEmdAghTr5mXQxGpHjWqSz0dgC&index=7

// 급할수록 돌아가기, 천천히 끝까지 이해하고 문제 끝마치기.