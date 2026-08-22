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
int main(){
 Node * a = new Node(10);
  Node * b = new Node(20);
   Node * c = new Node(30);
    Node * d = new Node(40);
    a->next = b;
    b->next = c;  //(*b).next;
    c->next = d;
     Node *temp =a;
     while(temp!=NULL){//optimise the print method are 06.cpp
        cout<<temp->value<<" ";
        temp=temp->next;
     }
     cout<<endl;
     cout<<a->next->next->next->value;

  
  }