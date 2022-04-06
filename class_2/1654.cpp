#include<iostream>
unsigned int arr[10001] = {0,};

unsigned int k, n, m;
unsigned int sol;

using namespace std;
int c(int a){
    int cnt = 0;
    for(int i=0; i<k; i++){
        cnt += arr[i]/a;
        // cout<<"\n **"<<cnt<<"**";;
    }
    return cnt;
}
void bs(unsigned int left, unsigned int mid, unsigned int right){
//    cout<<"\n"<<" "<<c(mid)<<" "<<left<<" "<<mid<<" "<<right<<"\n";
    if(left == mid && mid == right){
        sol = mid;
        return;
    }
    if(c(mid)<n){
        bs(left-1, (left+mid-1)/2 ,mid-1);
    }
    else if(c(mid>n)){
        bs(mid,(mid+right+1)/2, right);
    }
    else if(c(mid) == n){
        bs(mid, mid+right, right);
    }
}
int main(){
    cin>>k>>n;
    m = 0;
    for(int i=0; i<k; i++){
        cin>>arr[i];
        if(arr[i]>m) m = arr[i];
    }
    bs(1,1+m/2,m);
    cout<<sol;
    return 0;
}