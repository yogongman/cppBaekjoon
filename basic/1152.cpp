#include <iostream>
using namespace std;
int main(){
    char a[1000000];
    cin.getline(a,1000000);
    int i = 0;
    int count = 1;
    while(1){
        if(a[i]=='\0') break;
        if(a[i]==' ') count++;
        i++;
    }
    if(a[0]==' ') count--;
    if(a[i-1] == ' ') count--;
    cout<< count;
    return 0;
}