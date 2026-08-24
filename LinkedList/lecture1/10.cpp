//insert at end
#include <iostream>
using namespace std;
class Node{//user define datatype
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
class Linkedlist{//user defined data structure
 public:
    Node *head  ;
 Node * end ;
 int size ;
 Linkedlist(){
   head = end = NULL;
    size=0;
 }
 void insertEnd(int value){
    Node*temp = new Node(value);
    if(size==0) head = end = temp; 
    else {
        end->next =temp;
        end =temp;
    }
    size++;
 }
 void display(){
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->value<<" ";
    temp= temp->next;
  }
  cout<<endl;
 }
};

    int main(){
        Linkedlist ll;

        ll.insertEnd(10);
        ll.display(); 
        ll.insertEnd(20);
        ll.display();

    }//tc(1)
