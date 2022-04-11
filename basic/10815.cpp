#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> x;
bool bs(int a){
    int l = 0;
    int r = x.size();
    int m = r/2;
    while(l<=r){
        if(x[m] == a){
            return true;
        }
        else if(x[m] < a){
            l = m + 1;
        }
        else{
            r = m -1;
        }
        m = (l+r)/2;
    }
    return false;
}
int main(){
    int n,m,tmp;
	cin.tie(0);
	ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        x.push_back(tmp);
    }
    sort(x.begin(),x.end());
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>tmp;
        cout<<bs(tmp)<<" ";
    }
    return 0;
}
