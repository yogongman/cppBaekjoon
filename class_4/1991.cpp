#include <iostream>
using namespace std;
int number = 15;

//하나의 노드 정보를 선언
typedef struct node *treePointer;
typedef struct node{
    char data;
    treePointer leftChild, rightChild;
} node;

void inorder(treePointer ptr){
    if(ptr){
        inorder(ptr->leftChild);
        cout<<ptr->data;
        inorder(ptr->rightChild);
    }
}
void preorder(treePointer ptr){
    if(ptr){
        cout<<ptr->data;
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}
void postorder(treePointer ptr){
    if(ptr){
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        cout<<ptr->data;
    }
}
int main(){
    int n;
    cin >>n;
    char l,m,r;
    node *a[200];
    for(int i=0; i<200; i++){
        a[i] = (node *) malloc(sizeof(node));
    }
    for(int i=0; i<n; i++){
        cin>>m>>l>>r;
        a[m]->data = int(m);
        if(l=='.') a[m]->leftChild = NULL;
        else a[m]->leftChild = a[l];
        if(r=='.') a[m]->rightChild = NULL;
        else a[m] -> rightChild = a[r];
    }
    preorder(a[65]);
    cout<<"\n";
    inorder(a[65]);
    cout<<"\n";
    postorder(a[65]);
    cout<<"\n";
}