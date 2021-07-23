#include<bits/stdc++.h>
using namespace std;
int l,c;
char arr[17];
int vow;
char a[17];
bool isused[17];
void func(int k){
    if(k == l && (vow >= 1 && l-vow>=2)){
        for(int i=0; i<l; i++){
            cout<<a[i];
        }
        cout<<"\n";
    }
    for(int i=0; i<c; i++){
        if(!isused[i] && a[k-1]<=arr[i]){
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') vow++;
            isused[i] = 1;
            a[k] = arr[i];
            func(k+1);
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') vow--;
            isused[i] = 0;
        }
    }

}
int main(){
    cin>>l>>c;
    for(int i=0; i<c; i++){
        cin>>arr[i];
    }
    sort(arr,arr+c);
    func(0);
    
}