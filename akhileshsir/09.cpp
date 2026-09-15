#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *GetNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

Node *EnQueue(Node *PQ, int x) {
    Node *curr, *prev;
    curr = PQ;
    prev = NULL;

    Node *r = GetNode(x);

    while (curr != NULL && x >= curr->data) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        r->next = PQ;
        PQ = r;
    } else {
        prev->next = r;
        r->next = curr;
    }

    return PQ;
}

Node *DeQueue(Node *PQ) {
    if (PQ == NULL) {
        cout << "underflow";
        exit(1);
    }

    Node *p = PQ;
    int x = p->data;
    PQ = PQ->next;

    delete p;

    cout << x << endl;
    return PQ;
}

int main() {
    Node *PQ;
    PQ = NULL;

    PQ = EnQueue(PQ, 4);
    PQ = EnQueue(PQ, 2);
    PQ = EnQueue(PQ, 9);
    PQ = EnQueue(PQ, 7);
    PQ = EnQueue(PQ, 5);
    PQ = EnQueue(PQ, 4);
     PQ = EnQueue(PQ, 8);
      PQ = EnQueue(PQ, 9);

    Node *p = PQ;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;

    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);

     p=PQ;
     while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
