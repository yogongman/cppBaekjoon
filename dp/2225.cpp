#include<iostream>
using namespace std;
int main(){
    int n,k;
    long long int arr[202][202]; // index 1 = n, index 2 = r
    cin>>n>>k; 

    for(int i=0; i<=200; i++){
        arr[1][i] = 1;
        arr[i][1] = i;
    }

    for(int i=2; i<=200; i++){
        for(int j=2; j<=200; j++){
            arr[j][i] = (arr[j-1][i] + arr[j][i-1]) % 1000000000;
        }
    }

    // for(int i=1; i<=k; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    cout<<arr[k][n] % 1000000000;
    return 0;
}