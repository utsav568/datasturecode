#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};
class Queue{//user defined data stuture
public:
Node *head;
Node *tail;
int sizei;
Queue(){
    head=tail=NULL;
    sizei=0;
}
void push(int val){
    Node *temp = new Node(val);
    if(sizei==0)head=tail=temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    sizei++;
}
void pop(){
    if(sizei==0){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    sizei--;
    delete(temp);
}
int front(){
     if(sizei==0){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    return head->val;
}
int rear(){
     if(sizei==0){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    return tail->val;
}
void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(){
    return sizei;
}
bool empty(){
    if(sizei==0)return true;
    else return false;
}
};
int main(){
     Queue q;
 q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.push(70);
    q.display();
    cout<<q.size()<<endl;
    

}
