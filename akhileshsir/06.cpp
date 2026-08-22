#include <iostream>
#include <cstdlib>

using namespace std;

#define SIZE 10

struct Queue {
    int item[SIZE];
    int rear;
    int front;
};

Queue Q;

void Initialize() {
    Q.rear = -1;
    Q.front = 0;
}

bool IsEmpty() {
    return (Q.rear - Q.front + 1 == 0);
}

bool IsFull() {
    return (Q.rear == SIZE - 1);
}

void EnQueue(int x) {
    if (IsFull()) {
        cout << "Queue Overflow"<<endl;
        exit(1);
    }
    Q.rear++;
    Q.item[Q.rear] = x;
}

int DeQueue() {
    if (IsEmpty()) {
        cout << "Queue Underflow"<<endl;
        exit(1);
    }
    int x = Q.item[Q.front];
    Q.front++;
    return x;
}

int main() {
    Initialize();

    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);

    cout << DeQueue() << endl;
    cout << DeQueue() << endl; 

}


