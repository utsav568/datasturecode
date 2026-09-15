#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *left = NULL;
Node *right = NULL;

Node *GetNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

void InsertLeft(int x) {
    Node *p = GetNode(x);

    p->next = left;

    if (left != NULL)
        left->prev = p;
    else
        right = p;

    left = p;
}

void InsertRight(int x) {
    Node *p = GetNode(x);

    p->prev = right;

    if (right != NULL)
        right->next = p;
    else
        left = p;

    right = p;
}

void Display() {
    Node *p = left;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
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