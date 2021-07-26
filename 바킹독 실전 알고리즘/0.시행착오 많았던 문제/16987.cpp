//구현이 힘들어 바킹독님 코드를 보고 했다.

//브루트포스처럼 탐색하여 최대한 많이 깬 횟수를 갱신하여 그것을 정답으로 제출.

#include<bits/stdc++.h>
using namespace std;
int n;
int s[9]; //내구도
int w[9]; //무게
int mx=0;
int ans=0; //깨진 것
void func(int k){
    // cout<<k<<" ";
    if(k == n){
        mx = max(mx,ans);
        // cout<<"\n";
        return; 
    }
    if(s[k] <= 0 || ans == n-1){ //선택한 계란이 깨져있거나/ 들고있는 계란을 제외한 나머지가 다 깨져있을경우
        func(k+1);
        return;
    }
    for(int i=0; i<n; i++){
        if(i == k || s[i] <= 0) continue; //왼손에 들고있는 계란이거나, 내구도가 0이하인 계란이면 건너띄기
        // 아닌경우에는 모든 나머지 계란들 브루트포스
        s[k] -= w[i];
        s[i] -= w[k];
        //계란 치기
        if(s[k]<=0) ans++;
        if(s[i]<=0) ans++;
        func(k+1);
        if(s[k]<=0) ans--;
        if(s[i]<=0) ans--;
        s[k] += w[i];
        s[i] += w[k];
    }

}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i]>>w[i];
    }
    func(0);
    cout<<mx;

}