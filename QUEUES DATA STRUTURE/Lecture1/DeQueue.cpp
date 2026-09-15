#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node * prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class  DeQueue{
public:
Node *head;
Node *tail;
int s;
DeQueue(){
    head=tail=NULL;
    s =0;
}
void push_back(int val){
Node *temp = new Node(val);
if(s==0)head=tail=temp;
else{
    tail->next = temp;
    temp->prev =tail;
    tail = temp;
}
s++;
}
void push_front(int val){
    Node *temp = new Node(val);
    if(s==0)head=tail=temp;
    else{
        temp->next = head;
        temp->prev =head;
        head= temp;
       
    }
    s++;
}
void pop_front(){
    if(s==0){//s=size
        cout<<"Queue is Empty"<<endl;
        return;
    }
    head = head->next;
    if(head)head->prev = NULL;
    if(head==NULL)tail = NULL;
    s--;
}
void pop_back(){
    if(s==0){
        cout<<"List is Empty"<<endl;
        return;
    }
    else if(s==1){
        pop_front();
        return;
    }
    Node *temp = tail->prev;
    temp->next = NULL;
    tail =temp;
    s--;
}
int front(){
    if(s==0){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return head->val;
}
int back(){
     if(s==0){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return tail->val;
}
int size(){
    return s;
}
bool empty(){
    if(s==0)return true;
    else return false;
}
void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

};
int main(){
    DeQueue D;
    D.push_front(10);
    D.push_front(20);
    D.push_front(30);
    D.push_front(40);
    D.push_front(50);
    D.push_front(60);
    D.push_back(70);
    cout<<D.size()<<endl;
    D.display();
}
