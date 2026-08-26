#include <iostream>
using namespace std;
class Node{
public:
int value;
Node *next;
Node(int value){
    this->value =value;
    this->next = NULL;
}
};
void display(Node *head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head=head->next;
    }
    cout<<endl;
}
 void secondmiddle(Node *head){
    Node * slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"The left middle : "<<slow->value;
}
 int main(){
    Node * a = new Node(1);
    Node * b = new Node(2);
    Node * c = new Node(3);
    Node * d = new Node(4);
    Node * e = new Node(5);
    Node * f = new Node(6);
    
    a->next = b;
    b->next = c;  
    c->next = d;
    d->next =e;
    e->next = f;
   
   
    Node *head = a;
    display(head);
   secondmiddle(head);
    
 }