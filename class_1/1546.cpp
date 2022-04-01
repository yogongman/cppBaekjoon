#include<iostream>
using namespace std;
int main(){
    int t;
    double max=-1;
    int arr[1002];
    double avg = 0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>arr[i];
        if(max<arr[i]) max = arr[i];
    }
    for(int i=0; i<t; i++){
        if(arr[i] == max){
            avg += 100;
        }
        else{
            avg += arr[i]/max*100;
        }
    }
    cout<<avg/t;


    return 0;
}