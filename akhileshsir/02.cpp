// circular queue
#include <bits/stdc++.h>
using namespace std;

class Queue
{
    vector<int> item;
    int rear;
    int front;

public:

    Queue(int SIZE)
    {
        item.resize(SIZE + 1);
        rear = 0;
        front = 0;
    }

    bool IsEmpty()
    {
        return rear == front;
    }

    void EnQueue(int x)
    {
        int m = item.size();

        if ((rear + 1) % m == front)
        {
            cout << "Queue over flow" << endl;
        }
        else
        {
            rear = (rear + 1) % m;
            item[rear] = x;
        }
    }

    int DeQueue()
    {
        int m = item.size();

        if (rear == front)
        {
            cout << "Queue is under flow" << endl;
            return -1;
        }
        else
        {
            front = (front + 1) % m;
            int x = item[front];

            return x;
        }
    }

    void Peek()
    {
        if (rear == front)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int m = item.size();
            cout << "Front element = " << item[(front + 1) % m] << endl;
        }
    }

    void Display()
    {
        if (rear == front)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int m = item.size();
            int i = (front + 1) % m;

            cout << "Queue = ";

            while (true)
            {
                cout << item[i] << " ";

                if (i == rear)
                    break;

                i = (i + 1) % m;
            }

            cout << endl;
        }
    }
};

int main()
{
    Queue Q(5);

    int choice;
    int x;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter element: ";
            cin >> x;

            Q.EnQueue(x);
        }

        else if (choice == 2)
        {
            x = Q.DeQueue();

            if (x != -1)
                cout << "Deleted element = " << x << endl;
        }

        else if (choice == 3)
        {
            Q.Peek();
        }

        else if (choice == 4)
        {
            Q.Display();
        }

        else if (choice == 5)
        {
            cout << "Exit" << endl;
        }

        else
        {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 5);

    return 0;
}