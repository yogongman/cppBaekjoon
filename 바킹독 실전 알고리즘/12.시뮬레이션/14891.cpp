#include<bits/stdc++.h>
using namespace std;
string tmp;
int arr[8][5];
int k;
int ans;
int a[2];
bool isvisited[4];
void spin(int t, int num){ //t = -1 반시계, t = 1 시계 ,  num은 톱니 번호
    if(t == -1){
        int temp = arr[0][num];
        for(int i=0; i<7; i++){
            arr[i][num] = arr[i+1][num];
        }
        arr[7][num] = temp;
    }
    else if(t == 1){
        int temp = arr[7][num];
        for(int i=7; i>=1; i--){
            arr[i][num] = arr[i-1][num]; 
        }
        arr[0][num] = temp;
    }
}
void func(int t, int num){
    // cout<<"*"<<num<<"\n";
    isvisited[num] = 1;
    // cout<<"$"<<t<<" "<<num<<"\n";
    int g = num + 1;
    int b = num - 1;
    if(g<4 && g>=0){
        if((arr[6][g] != arr[2][num]) && !isvisited[g]){
            func(t*-1,g);
        }
    }
    if(b<4 && b>=0){
        if((arr[2][b] != arr[6][num]) && !isvisited[b]){
            func(t*-1,b);
        }
    }
    spin(t,num);
}

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    for(int i=0; i<4; i++){
        cin>>tmp;
        for(int j=0; j<8; j++){
            arr[j][i] = tmp[j]-'0';
        }
    }
    cin>>k;
    for(int i=0; i<k; i++){
        memset(isvisited,false,sizeof(isvisited));
        cin>>a[0]>>a[1];
        func(a[1],a[0]-1);
        // for(int i=0; i<4; i++){
        //     for(int j=0; j<8; j++){
        //         cout<<arr[j][i]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
    for(int i=0; i<4; i++){
        if(arr[0][i] == 1) ans += 1<<i;
    }
    cout<<ans;
}