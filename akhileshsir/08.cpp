#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *GetNode() {
    Node *p;
    p = new Node;
    return p;
}

Node *Enqueue(Node *PQ, int x) {
    Node *curr, *prev;

    curr = PQ;
    prev = NULL;

    Node *r;
    r = GetNode();

    r->data = x;

    while (curr != NULL && x >= curr->data) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        r->next = PQ;
        PQ = r;
    }
    else {
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

    Node *p;
    p = PQ;

    int x = p->data;

    PQ = PQ->next;

    delete(p);

    cout << x << endl;

    return PQ;
}

int main() {

    Node *PQ;
    PQ = NULL;

    PQ = Enqueue(PQ, 4);
    PQ = Enqueue(PQ, 2);
    PQ = Enqueue(PQ, 9);
    PQ = Enqueue(PQ, 7);
    PQ = Enqueue(PQ, 5);
    PQ = Enqueue(PQ, 4);

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

   

    p = PQ;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}