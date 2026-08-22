#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;

};
node *front ,*rear;
node *getnode(){
    node *p;
    p=new node;
    return p;
    EnQueue(int x){
        node *temp;
        temp = Getnode();
        temp->data=x;
        temp->next = NULL;
        if(rear!=NULL){
            rear ->next =temp;
        }
        else front=temp;
        rear =temp
    }
    DeQueue(){
        node *p;
        p=front;
        front =front->next;
        int x=p->data;
        delete(p);
        return x;
    }

     void Initialize(){
        front = NULL;
        rear = NULL:
    }
    int main{
Initialize();
 EnQueue(1);
 EnQueue(2);
 EnQueue(3);
 EnQueue(4);
 cout<<DeQueue
    }


