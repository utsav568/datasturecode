//insertat end
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void display(Node *head){//new box form
    
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

    int size(Node *head){
        Node *temp = head;
        int n =0;
    while(temp!=NULL){
       
        temp = temp->next; 
        n++;
    }
    return n;
}
void insertatend(Node *head,int value){
    Node *t = new Node(value);
    while(head->next!=NULL)head= head->next;
    head->next = t;
}
int main(){
 Node * a = new Node(10);
  Node * b = new Node(20);
   Node * c = new Node(30);
    Node * d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c; 
    c->next = d;
    d->next = e;
    display(a);
   insertatend(a ,60);
   display(a);
    

  //tc = o(n);
  }