
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class Queue {
public:
    Node *head, *tail;
    int sizei;

    Queue() {
        head = tail = NULL;
        sizei = 0;
    }

    void push(int val) {
        Node *temp = new Node(val);

        if (head == NULL) {
            head = tail = temp;
            temp->next = head;
        }
        else {
            temp->next = head;
            tail->next = temp;
            tail = temp;
        }

        sizei++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node *temp = head;

        if (head == tail) {
            head = tail = NULL;
        }
        else {
            head = head->next;
            tail->next = head;
        }

        delete temp;
        sizei--;
    }

    int front() {
        if (head == NULL) return -1;
        return head->val;
    }

    int rear() {
        if (tail == NULL) return -1;
        return tail->val;
    }

    int size() {
        return sizei;
    }

    bool empty() {
        return head == NULL;
    }

    void display() {
        if (head == NULL) return;

        Node *temp = head;

        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.display();

    q.pop();
    q.display();

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}
