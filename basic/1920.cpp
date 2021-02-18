#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 시간초과가 떴음 (벡터함수 원형을 인자로 전달하는 과정에서 복사하며 클래스 생성 과정이 느릴 수 있음. 참조자를 사용할 것.)
// void bin_s(vector<int>vec_tar, int target){
//     int left_idx,right_idx,mid_idx;
//     left_idx = 0;
//     right_idx = vec_tar.size()-1;

//     while(left_idx<=right_idx){
//         mid_idx = (left_idx+right_idx)/2;
//         if(vec_tar[mid_idx] == target){
//             printf("1\n");
//             break;
//         }
//         else if(vec_tar[mid_idx]>target){
//             right_idx = mid_idx-1;
//         }
//         else{
//             left_idx = mid_idx+1;
//         }
//     }
//     if(left_idx>right_idx&&target!=vec_tar[mid_idx]) printf("0\n");

// }

// 구체적 내용은 https://www.acmicpc.net/board/view/38804 참조
void bin_s(vector<int> &vec_tar, int target){
    int left_idx,right_idx,mid_idx;
    left_idx = 0;
    right_idx = vec_tar.size()-1;

    while(left_idx<=right_idx){
        mid_idx = (left_idx+right_idx)/2;
        if(vec_tar[mid_idx] == target){
            printf("1\n");
            break;
        }
        else if(vec_tar[mid_idx]>target){
            right_idx = mid_idx-1;
        }
        else{
            left_idx = mid_idx+1;
        }
    }
    if(left_idx>right_idx&&target!=vec_tar[mid_idx]) printf("0\n");

}
int main(){
    int n,m,tmp;
    scanf("%d",&n);
    vector<int>a,b;
    for(int i=0; i<n; i++){
        scanf("%d",&tmp);
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    scanf("%d",&m);
    for(int i=0; i<m; i++){
        scanf("%d",&tmp);
        bin_s(a,tmp);
    }

    return 0;
}