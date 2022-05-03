#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int arr[1001][1001];
stack<char> res;
int c;
string a,b;
void rec(int x,int y){
    if(arr[x][y] == 0) return;
    if(arr[x][y] == arr[x-1][y]) rec(x-1,y);
    else if(arr[x][y] == arr[x][y-1]) rec(x,y-1);
    else{
        res.push(a[x-1]);
        rec(x-1,y-1);
    }
}
int main(){

    cin>>a>>b;


    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] == b[j]){
                arr[i+1][j+1] = arr[i+1-1][j+1-1] + 1;
            }
            else{
                arr[i+1][j+1] = max(arr[i+1-1][j+1], arr[i+1][j+1-1]);
            }
        }
    }
    // for(int i=0; i<=a.size(); i++){
    //     for(int j=0; j<=b.size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<arr[a.size()][b.size()]<<"\n";
    c = arr[a.size()][b.size()];

    rec(a.size(),b.size());
    while(!res.empty()){
        cout<<res.top(); res.pop();
    }

    return 0;
}