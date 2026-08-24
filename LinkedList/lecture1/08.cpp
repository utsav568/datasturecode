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
void displayrecursion(Node *head){
    if(head==NULL)return;
    cout<<head->value<<" ";
    displayrecursion(head->next);
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
   
    displayrecursion (a);
    
  }