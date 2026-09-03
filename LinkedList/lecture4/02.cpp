
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void forwarddisplay(Node *head){//o(1)space
    while(head){
        cout<<head->value<<" ";
      head =  head->next;
    }
    cout<<endl;
}
void displayrev(Node *End){
    while(End){
        cout<<End->Value<<" ";
        End = End->prev;
    }
    cout<<endl;
}
int main(){
    //10 20 30 40 50
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    Node * e = new Node(50);
   
   a->next =b;
   b->next =c;
   c->next = d;
   d->next =e;

   b->prev =a;
   c->prev = b;
   d->prev = c;
   e->prev =d;
   forwarddisplay(a);
   display(e);

   

    
}