#include<iostream>
unsigned arr[10001];

unsigned int k, n, m = -1;
unsigned int sol;

using namespace std;
int c(int a){
    int cnt = 0;
    for(int i=0; i<k; i++){
        cnt += arr[i]/a;
    }
    return cnt;
}
void bs(unsigned int left, unsigned int mid, unsigned int right){
    if(left >= mid) return;
    if(c(mid)<n){  // 반절한 선이 너무 긴 경우
        bs(left, (mid+left)/2, mid);
    } 
    else if(c(mid)>=n){
        sol = mid;
        bs(mid, (mid+right)/2, right);
    }
}
int main(){
    cin>>k>>n;
    for(int i=0; i<k; i++){
        cin>>arr[i];
        if(arr[i]>m) m = arr[i];
    }
    bs(1,m/2,m);
    cout<<sol;
    return 0;
}