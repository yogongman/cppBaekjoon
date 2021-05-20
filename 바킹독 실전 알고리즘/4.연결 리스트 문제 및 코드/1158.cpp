#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<int>a = {};
    vector<int> ans;
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        a.push_back(i);
    }
    auto t = a.begin();
    while(!a.empty()){
        for(int i=1; i<k; i++){
            if(a.end()==t){
                t=a.begin();
            }
            t++;
            if(a.end()==t) t=a.begin();
        }
        ans.push_back(*t);
        t = a.erase(t);
    }
    cout<<"<";
	for(int i = 0; i < ans.size() - 1; ++i)
		cout << ans[i] << ", ";



	cout << ans[ans.size() - 1];

	cout << ">";

}

/* 시도했던 코드
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>a = {};
    list<int> ans = {};
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        a.push_back(i);
    }
    auto t = a.begin();
    while(!a.empty()){
        for(int i=1; i<k; i++){
            if(a.end()==t){
                t=a.begin();
            }
            t++;
        }
        ans.push_back(*t);
        t = a.erase(t);
    }
    for(auto i: ans){
        cout<<i;
    }
}

틀린 이유: t++되고 범위를 넘었을 경우를 생각하지 않았다.

*/