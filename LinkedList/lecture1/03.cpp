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
 Node a(10);
 Node b(20);
 Node c(30);
  Node d(40);
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = NULL;
  Node temp = a;
  while(temp.next!=NULL){
    cout<<temp.value<<" ";
    temp = *(temp.next);
  }
//here 40 is not print so optise code on 04.cpp
}