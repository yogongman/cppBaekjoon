#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    float sn;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>sn;
        float arr[1001];
        float t = 0,avg = 0;
        for(int j=0; j<sn; j++){
            cin>>arr[j];
            t += arr[j];
        }
        avg = t/sn;
        float per,ps = 0;
        for(int j=0; j<sn; j++){
            if(arr[j]>avg){
                ps++;
            }
        }
        per = ps/sn*100;
        cout<<fixed;
        cout.precision(3);
        cout<<per<<"%\n";
    }
    return 0;
}