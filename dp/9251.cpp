#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int arr[1001][1001];
int main(){
    string a,b;
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
    cout<<arr[a.size()][b.size()];
    return 0;
}