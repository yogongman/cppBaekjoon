#include<iostream>
#include<algorithm>
using namespace std;
int n;
int mn[2][3], mx[2][3];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n;
    for(int i=1; i<=n; i++){
        int x,y,z;
        cin>>x>>y>>z;

        mn[i%2][0] = min(mn[(i+1)%2][0],mn[(i+1)%2][1]) + x;
        mx[i%2][0] = max(mx[(i+1)%2][0],mx[(i+1)%2][1]) + x;

        mn[i%2][1] = min(min(mn[(i+1)%2][0],mn[(i+1)%2][1]),mn[(i+1)%2][2]) + y;
        mx[i%2][1] = max(max(mx[(i+1)%2][0],mx[(i+1)%2][1]),mx[(i+1)%2][2]) + y;

        mn[i%2][2] = min(mn[(i+1)%2][1],mn[(i+1)%2][2]) + z;
        mx[i%2][2] = max(mx[(i+1)%2][1],mx[(i+1)%2][2]) + z;
    }

    cout<<max(max(mx[(n%2)][0],mx[(n%2)][1]),mx[(n%2)][2])<<" "<<min(min(mn[(n%2)][0],mn[(n%2)][1]),mn[(n%2)][2]);
    return 0;
}