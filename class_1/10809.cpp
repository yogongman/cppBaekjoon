#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string a;
    int arr[26] = {0,};
    memset(arr,-1,sizeof(int)*26);
    cin>>a;
    for(int i=0; i<a.size(); i++){
        if(arr[a[i]-97] == -1){
            arr[a[i]-97] = i;
        }
    }
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}