#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x1,x2,y1,y2,r1,r2;
        int res;

        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        int S,R,r;
        S = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2); // 두 중심좌표간 거리의 제곱
        if(r1>=r2){
            R = r1;
            r = r2;
        }
        else{
            r = r1;
            R = r2;
        }
        if(x1 == x2 && y1 == y2 && r1 == r2) res = -1;
        else if((R+r)*(R+r) == S || (R-r)*(R-r) == S) res = 1; // 내접 혹은 외접
        else if((R-r)*(R-r)<S&&S<(R+r)*(R+r)) res = 2;
        else if((R+r)*(R+r) < S || (R-r)*(R-r) > S) res = 0;
        cout<<res<<"\n";
    }

    return 0;
}