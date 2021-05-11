#include<iostream>
using namespace std;
int main(){
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    int c[3] = {7,8,9};
    int d[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr[3] = {a,b,c};
    int *adr[3] = {&a[0],&b[0],&c[0]}; //[]연산이 우선 => 그 후 *연산
    int (*pptr)[3] = d; //()연산이 우선 => 그 후 []연산
    cout<<ptr[0][1];
    cout<<&ptr[0];
    cout<<adr[0];
    cout<<[]
}