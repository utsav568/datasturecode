#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *front, *rear;

node *getnode() {
    node *p;
    p = new node;
    return p;
}

void EnQueue(int x) {
    node *temp;
    temp = getnode();

    temp->data = x;
    temp->next = NULL;

    if (rear != NULL) {
        rear->next = temp;
    }
    else {
        front = temp;
    }

    rear = temp;
}

int DeQueue() {
    node *p;
    p = front;

    if (front == NULL) {
        cout << "Queue is empty";
        return -1;
    }

    front = front->next;

    int x = p->data;
    delete(p);

    if (front == NULL) {
        rear = NULL;
    }

    return x;
}

void Initialize() {
    front = NULL;
    rear = NULL;
}

int main() {
    Initialize();

    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);

    cout << DeQueue() << endl;
    cout << DeQueue() << endl;

    return 0;
}