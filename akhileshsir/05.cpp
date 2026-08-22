//circular queus
#include <bits/stdc++.h>
using namespace std;
class Queue{
    vector<int> item;
    int rear;
    int front;
    public:
    Queue(int SIZE){
        item.resize(SIZE + 1);
        rear=0;
        front=0;
    }
  bool  IsEmpty(){
        return rear==front;
    }
void EnQueue(int x){
    int m=item.size();
    if((rear+1)%m==front){
        cout<<"Queue over flow";
        exit(1);
    }
    else{
   rear = (rear+1)%m;
    item[rear]=x;
    }
}
int DeQueue(){
    int m=item.size();
    if(rear==front){
        cout<<"Queue is under flow";
        exit(1);
    }
    else{
    int x;
    front =( front+1)%m;
    x=item[front];
    return x;
    }
}

};

int main() {
	// your code goes here
	Queue Q(5);
	Q.EnQueue(1);
	Q.EnQueue(2);
	Q.EnQueue(3);
	Q.EnQueue(4);
	Q.EnQueue(5);
	cout<<Q.DeQueue()<<endl;
	Q.EnQueue(6);
	cout<<Q.DeQueue()<<endl;
	cout<<Q.DeQueue()<<endl;
	cout<<Q.DeQueue()<<endl;
	cout<<Q.DeQueue()<<endl;
	cout<<Q.DeQueue()<<endl;
	
	
	

}
