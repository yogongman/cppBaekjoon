#include<bits/stdc++.h>
using namespace std;
int n,w,l;
int cnt;

int arr[1001];
bool isgone[1002];
bool done;
int main(){
    cin>>n>>w>>l;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(isgone[i]) continue;
        // cout<<"i: "<<i<<"\n";
        if(i == n-1){
            cnt++;
            break;
        }
        if(done) break;
        int curl = arr[i]; //현 하중
        int curw = 1; //현 길이
        for(int j=i+1; j<n; j++){
            if(isgone[j]) continue;
            // cout<<"curj :"<<j<<"\n";
            if(curl+arr[j]>l){ // 최대 하중보다 무거워지면
                cnt += curw + w-1;
                // cout<<"cnt: "<<cnt<<"\n";
                // cout<<"curw: "<<curw<<"\n";
                break;
            }
            else{ // 최대 하중보다 무겁지 않으면
                curl  += arr[j];
                isgone[j] = 1;
                curw++;
                if(j == n-1){
                    cnt +=curw;
                    done = true;
                }
                // cout<<"cnt: "<<cnt<<"\n";
                // cout<<"curj1: "<<j<<"\n";
            }
        }
    }
    // cout<<")"<<cnt;
    // for(int i=0; i<n; i++){
    //     if(isgone) cout<<"@"<<i<<" ";
    // }
    cout<<cnt+w;
}