#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int idx_max[301];
    int a[301];
    int num,temp;
    cin >> num;
    for(int i=0; i<num; i++){
        cin>>temp;
        a[i] = temp;
    }
    if(num == 1){
        cout<<a[0];
    }
    else if(num == 2){
        cout<<a[0]+a[1];
    }
    else{
        idx_max[0] = a[0];
        idx_max[1] = max(a[0]+a[1],a[1]);
        idx_max[2] = max(a[0]+a[2],a[1]+a[2]);
        if(num>=3){
            for(int i=3; i<num; i++){
                idx_max[i] = max(idx_max[i-2]+a[i],a[i]+a[i-1]+idx_max[i-3]);
            }
        }
        cout<<idx_max[num-1];
 
    }
    // cout<<a[4]+a[5];
    // cout<<a[3]+a[5];
    // cout<<idx_max[num-2];
    // for(int i=num-3; i>=0; i--){
    //     idx_max[i] = a[i] + max(idx_max[i+1],idx_max[i+2]);
    //     cout<<idx_max[i]<<endl;
    // }
    // cout<<max(idx_max[0],idx_max[1]);
    return 0;
}


// 한 가지 배운 점 => vector에서 push_back()을 사용할 떄 인덱스 접근을 하려면
//  vec객체에 몇 개를 할당 할 것인지 정해주어야함.
// ex) vector<int> a ==> X
// ex) vector<int> a(6) ==> O