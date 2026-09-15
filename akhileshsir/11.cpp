#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *Right = NULL;
Node *Left = NULL;

Node *GetNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

void InsertLeft(int x) {
    Node *p = GetNode(x);

    p->next = Right;

    if (Left != NULL)
        Left->prev = p;
    else
        Right = p;

    Left = p;
}

void InsertRight(int x) {
    Node *p = GetNode(x);

    p->prev = Right;

    if (Right != NULL)
        Right->next = p;
    else
        Left = p;

    Right = p;
}

void Display() {
    Node *p = Left;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}
void InsertAray(int arr[],n,i,x){
    for(int i=n-1;i>=1;i--){
        arr[i+1]=arr[j];
        arr[i]=x;
        n+=1;
    }
}

int main() {
    InsertLeft(1);
    InsertLeft(2);
    InsertRight(3);
    InsertRight(4);

    Display();

    return 0;
}